from urllib import request
from xml.dom.minidom import parseString

def subdata(node):
        name = ''
        for cnode in node.childNodes:
            if cnode.nodeType == cnode.TEXT_NODE:
                name = name + cnode.nodeValue
            else:
                name = name + subdata(cnode)
        return name

def textnode(node):
        name = ''
        for cnode in node.childNodes:
            if cnode.nodeType == cnode.TEXT_NODE:
                name = name + cnode.nodeValue
        return name


def process():

    enumset= set()
    cmdset = set()

    url = "https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml"
    text = request.urlopen(url).read().decode('utf-8')
    doc = parseString(text)

    for feature in doc.getElementsByTagName('feature'):
        version = feature.getAttribute('name')

# We want everything before version 4
        if version == "GL_VERSION_4_0":
            break

        requires = feature.getElementsByTagName('require')
        removes = feature.getElementsByTagName('remove')

        for require in requires:
            enums = require.getElementsByTagName('enum')
            for enum in enums:
                name = enum.getAttribute('name')
                enumset.add(name)

            cmds = require.getElementsByTagName('command')
            for cmd in cmds:
                name = cmd.getAttribute('name')
                cmdset.add(name)

        for require in removes:
            enums = require.getElementsByTagName('enum')
            for enum in enums:
                name = enum.getAttribute('name')
                enumset.remove(name)

            cmds = require.getElementsByTagName('command')
            for cmd in cmds:
                name = cmd.getAttribute('name')
                cmdset.remove(name)


    cmdtag = doc.getElementsByTagName('commands')

    c_top = []
    c_bot = []

    for cmd in cmdtag[0].getElementsByTagName('command'):
        name = cmd.getElementsByTagName('name')[0]
        proto = cmd.getElementsByTagName('proto')[0]
        params = cmd.getElementsByTagName('param')
        cmdname= subdata(name)
        protoname= textnode(proto)
        pname = []
        for param in params:
            pname.append(subdata(param))
        if cmdname in cmdset:
            print ("typedef %s (WINAPI * %s)(%s);" % (protoname, cmdname.upper() + 'PROC', ','.join(pname)), file=h_file)
            print ("extern %s %s;" % (cmdname.upper() + "PROC", cmdname), file=h_file);
                    
            print(file=h_file)

            c_top.append("%s %s;" % (cmdname.upper() + "PROC", cmdname));
            c_bot.append("    %s=(%s)wglGetProcAddress(\"%s\");" % (cmdname, cmdname.upper() + 'PROC', cmdname));

    enumtag = doc.getElementsByTagName('enums')

    for enumgroup in enumtag:
        for enum in enumgroup.getElementsByTagName('enum'):
            name = enum.getAttribute('name')
            value = enum.getAttribute('value')
            if name in enumset:
                print('#define %s %s' % (name, value), file=h_file)


    print('\n'.join(c_top), file=c_file);
    print('''
void init_openg33()
{

''', file=c_file)
    print('\n'.join(c_bot), file=c_file);
    print ("}", file = c_file)

h_file = open("opengl33.h", "wt")
c_file = open("opengl33.cpp", "wt")

print (''' #include <windows.h>
#include <stdint.h>

typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef void GLvoid;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLclampx;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void *GLeglImageOES;
typedef char GLchar;
typedef char GLcharARB;
typedef unsigned short GLhalfARB;
typedef unsigned short GLhalf;
typedef GLint GLfixed;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;
typedef int64_t GLint64;
typedef uint64_t GLuint64;
typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;
typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;
typedef struct __GLsync *GLsync;
struct _cl_context;
struct _cl_event;
typedef void ( *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void ( *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void ( *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);


        ''', file = h_file);

print ('#include "opengl33.h"', file=c_file)
process()




