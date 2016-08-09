
#include <windows.h>
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


        
typedef void  (WINAPI * GLACTIVETEXTUREPROC)(GLenum texture);
extern GLACTIVETEXTUREPROC glActiveTexture;

typedef void  (WINAPI * GLATTACHSHADERPROC)(GLuint program,GLuint shader);
extern GLATTACHSHADERPROC glAttachShader;

typedef void  (WINAPI * GLBEGINCONDITIONALRENDERPROC)(GLuint id,GLenum mode);
extern GLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;

typedef void  (WINAPI * GLBEGINQUERYPROC)(GLenum target,GLuint id);
extern GLBEGINQUERYPROC glBeginQuery;

typedef void  (WINAPI * GLBEGINTRANSFORMFEEDBACKPROC)(GLenum primitiveMode);
extern GLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;

typedef void  (WINAPI * GLBINDATTRIBLOCATIONPROC)(GLuint program,GLuint index,const GLchar *name);
extern GLBINDATTRIBLOCATIONPROC glBindAttribLocation;

typedef void  (WINAPI * GLBINDBUFFERPROC)(GLenum target,GLuint buffer);
extern GLBINDBUFFERPROC glBindBuffer;

typedef void  (WINAPI * GLBINDBUFFERBASEPROC)(GLenum target,GLuint index,GLuint buffer);
extern GLBINDBUFFERBASEPROC glBindBufferBase;

typedef void  (WINAPI * GLBINDBUFFERRANGEPROC)(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size);
extern GLBINDBUFFERRANGEPROC glBindBufferRange;

typedef void  (WINAPI * GLBINDFRAGDATALOCATIONPROC)(GLuint program,GLuint color,const GLchar *name);
extern GLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;

typedef void  (WINAPI * GLBINDFRAGDATALOCATIONINDEXEDPROC)(GLuint program,GLuint colorNumber,GLuint index,const GLchar *name);
extern GLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;

typedef void  (WINAPI * GLBINDFRAMEBUFFERPROC)(GLenum target,GLuint framebuffer);
extern GLBINDFRAMEBUFFERPROC glBindFramebuffer;

typedef void  (WINAPI * GLBINDRENDERBUFFERPROC)(GLenum target,GLuint renderbuffer);
extern GLBINDRENDERBUFFERPROC glBindRenderbuffer;

typedef void  (WINAPI * GLBINDSAMPLERPROC)(GLuint unit,GLuint sampler);
extern GLBINDSAMPLERPROC glBindSampler;

typedef void  (WINAPI * GLBINDTEXTUREPROC)(GLenum target,GLuint texture);
extern GLBINDTEXTUREPROC glBindTexture;

typedef void  (WINAPI * GLBINDVERTEXARRAYPROC)(GLuint array);
extern GLBINDVERTEXARRAYPROC glBindVertexArray;

typedef void  (WINAPI * GLBLENDCOLORPROC)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
extern GLBLENDCOLORPROC glBlendColor;

typedef void  (WINAPI * GLBLENDEQUATIONPROC)(GLenum mode);
extern GLBLENDEQUATIONPROC glBlendEquation;

typedef void  (WINAPI * GLBLENDEQUATIONSEPARATEPROC)(GLenum modeRGB,GLenum modeAlpha);
extern GLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;

typedef void  (WINAPI * GLBLENDFUNCPROC)(GLenum sfactor,GLenum dfactor);
extern GLBLENDFUNCPROC glBlendFunc;

typedef void  (WINAPI * GLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha);
extern GLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;

typedef void  (WINAPI * GLBLITFRAMEBUFFERPROC)(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter);
extern GLBLITFRAMEBUFFERPROC glBlitFramebuffer;

typedef void  (WINAPI * GLBUFFERDATAPROC)(GLenum target,GLsizeiptr size,const void *data,GLenum usage);
extern GLBUFFERDATAPROC glBufferData;

typedef void  (WINAPI * GLBUFFERSUBDATAPROC)(GLenum target,GLintptr offset,GLsizeiptr size,const void *data);
extern GLBUFFERSUBDATAPROC glBufferSubData;

typedef GLenum  (WINAPI * GLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
extern GLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;

typedef void  (WINAPI * GLCLAMPCOLORPROC)(GLenum target,GLenum clamp);
extern GLCLAMPCOLORPROC glClampColor;

typedef void  (WINAPI * GLCLEARPROC)(GLbitfield mask);
extern GLCLEARPROC glClear;

typedef void  (WINAPI * GLCLEARBUFFERFIPROC)(GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil);
extern GLCLEARBUFFERFIPROC glClearBufferfi;

typedef void  (WINAPI * GLCLEARBUFFERFVPROC)(GLenum buffer,GLint drawbuffer,const GLfloat *value);
extern GLCLEARBUFFERFVPROC glClearBufferfv;

typedef void  (WINAPI * GLCLEARBUFFERIVPROC)(GLenum buffer,GLint drawbuffer,const GLint *value);
extern GLCLEARBUFFERIVPROC glClearBufferiv;

typedef void  (WINAPI * GLCLEARBUFFERUIVPROC)(GLenum buffer,GLint drawbuffer,const GLuint *value);
extern GLCLEARBUFFERUIVPROC glClearBufferuiv;

typedef void  (WINAPI * GLCLEARCOLORPROC)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha);
extern GLCLEARCOLORPROC glClearColor;

typedef void  (WINAPI * GLCLEARDEPTHPROC)(GLdouble depth);
extern GLCLEARDEPTHPROC glClearDepth;

typedef void  (WINAPI * GLCLEARSTENCILPROC)(GLint s);
extern GLCLEARSTENCILPROC glClearStencil;

typedef GLenum  (WINAPI * GLCLIENTWAITSYNCPROC)(GLsync sync,GLbitfield flags,GLuint64 timeout);
extern GLCLIENTWAITSYNCPROC glClientWaitSync;

typedef void  (WINAPI * GLCOLORMASKPROC)(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha);
extern GLCOLORMASKPROC glColorMask;

typedef void  (WINAPI * GLCOLORMASKIPROC)(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a);
extern GLCOLORMASKIPROC glColorMaski;

typedef void  (WINAPI * GLCOLORP3UIPROC)(GLenum type,GLuint color);
extern GLCOLORP3UIPROC glColorP3ui;

typedef void  (WINAPI * GLCOLORP3UIVPROC)(GLenum type,const GLuint *color);
extern GLCOLORP3UIVPROC glColorP3uiv;

typedef void  (WINAPI * GLCOLORP4UIPROC)(GLenum type,GLuint color);
extern GLCOLORP4UIPROC glColorP4ui;

typedef void  (WINAPI * GLCOLORP4UIVPROC)(GLenum type,const GLuint *color);
extern GLCOLORP4UIVPROC glColorP4uiv;

typedef void  (WINAPI * GLCOMPILESHADERPROC)(GLuint shader);
extern GLCOMPILESHADERPROC glCompileShader;

typedef void  (WINAPI * GLCOMPRESSEDTEXIMAGE1DPROC)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;

typedef void  (WINAPI * GLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;

typedef void  (WINAPI * GLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;

typedef void  (WINAPI * GLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;

typedef void  (WINAPI * GLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;

typedef void  (WINAPI * GLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data);
extern GLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;

typedef void  (WINAPI * GLCOPYBUFFERSUBDATAPROC)(GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size);
extern GLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;

typedef void  (WINAPI * GLCOPYTEXIMAGE1DPROC)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border);
extern GLCOPYTEXIMAGE1DPROC glCopyTexImage1D;

typedef void  (WINAPI * GLCOPYTEXIMAGE2DPROC)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border);
extern GLCOPYTEXIMAGE2DPROC glCopyTexImage2D;

typedef void  (WINAPI * GLCOPYTEXSUBIMAGE1DPROC)(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width);
extern GLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D;

typedef void  (WINAPI * GLCOPYTEXSUBIMAGE2DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height);
extern GLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D;

typedef void  (WINAPI * GLCOPYTEXSUBIMAGE3DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height);
extern GLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;

typedef GLuint  (WINAPI * GLCREATEPROGRAMPROC)();
extern GLCREATEPROGRAMPROC glCreateProgram;

typedef GLuint  (WINAPI * GLCREATESHADERPROC)(GLenum type);
extern GLCREATESHADERPROC glCreateShader;

typedef void  (WINAPI * GLCULLFACEPROC)(GLenum mode);
extern GLCULLFACEPROC glCullFace;

typedef void  (WINAPI * GLDELETEBUFFERSPROC)(GLsizei n,const GLuint *buffers);
extern GLDELETEBUFFERSPROC glDeleteBuffers;

typedef void  (WINAPI * GLDELETEFRAMEBUFFERSPROC)(GLsizei n,const GLuint *framebuffers);
extern GLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;

typedef void  (WINAPI * GLDELETEPROGRAMPROC)(GLuint program);
extern GLDELETEPROGRAMPROC glDeleteProgram;

typedef void  (WINAPI * GLDELETEQUERIESPROC)(GLsizei n,const GLuint *ids);
extern GLDELETEQUERIESPROC glDeleteQueries;

typedef void  (WINAPI * GLDELETERENDERBUFFERSPROC)(GLsizei n,const GLuint *renderbuffers);
extern GLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;

typedef void  (WINAPI * GLDELETESAMPLERSPROC)(GLsizei count,const GLuint *samplers);
extern GLDELETESAMPLERSPROC glDeleteSamplers;

typedef void  (WINAPI * GLDELETESHADERPROC)(GLuint shader);
extern GLDELETESHADERPROC glDeleteShader;

typedef void  (WINAPI * GLDELETESYNCPROC)(GLsync sync);
extern GLDELETESYNCPROC glDeleteSync;

typedef void  (WINAPI * GLDELETETEXTURESPROC)(GLsizei n,const GLuint *textures);
extern GLDELETETEXTURESPROC glDeleteTextures;

typedef void  (WINAPI * GLDELETEVERTEXARRAYSPROC)(GLsizei n,const GLuint *arrays);
extern GLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

typedef void  (WINAPI * GLDEPTHFUNCPROC)(GLenum func);
extern GLDEPTHFUNCPROC glDepthFunc;

typedef void  (WINAPI * GLDEPTHMASKPROC)(GLboolean flag);
extern GLDEPTHMASKPROC glDepthMask;

typedef void  (WINAPI * GLDEPTHRANGEPROC)(GLdouble near,GLdouble far);
extern GLDEPTHRANGEPROC glDepthRange;

typedef void  (WINAPI * GLDETACHSHADERPROC)(GLuint program,GLuint shader);
extern GLDETACHSHADERPROC glDetachShader;

typedef void  (WINAPI * GLDISABLEPROC)(GLenum cap);
extern GLDISABLEPROC glDisable;

typedef void  (WINAPI * GLDISABLEVERTEXATTRIBARRAYPROC)(GLuint index);
extern GLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;

typedef void  (WINAPI * GLDISABLEIPROC)(GLenum target,GLuint index);
extern GLDISABLEIPROC glDisablei;

typedef void  (WINAPI * GLDRAWARRAYSPROC)(GLenum mode,GLint first,GLsizei count);
extern GLDRAWARRAYSPROC glDrawArrays;

typedef void  (WINAPI * GLDRAWARRAYSINSTANCEDPROC)(GLenum mode,GLint first,GLsizei count,GLsizei instancecount);
extern GLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;

typedef void  (WINAPI * GLDRAWBUFFERPROC)(GLenum buf);
extern GLDRAWBUFFERPROC glDrawBuffer;

typedef void  (WINAPI * GLDRAWBUFFERSPROC)(GLsizei n,const GLenum *bufs);
extern GLDRAWBUFFERSPROC glDrawBuffers;

typedef void  (WINAPI * GLDRAWELEMENTSPROC)(GLenum mode,GLsizei count,GLenum type,const void *indices);
extern GLDRAWELEMENTSPROC glDrawElements;

typedef void  (WINAPI * GLDRAWELEMENTSBASEVERTEXPROC)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex);
extern GLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;

typedef void  (WINAPI * GLDRAWELEMENTSINSTANCEDPROC)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount);
extern GLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;

typedef void  (WINAPI * GLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex);
extern GLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;

typedef void  (WINAPI * GLDRAWRANGEELEMENTSPROC)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices);
extern GLDRAWRANGEELEMENTSPROC glDrawRangeElements;

typedef void  (WINAPI * GLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex);
extern GLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;

typedef void  (WINAPI * GLENABLEPROC)(GLenum cap);
extern GLENABLEPROC glEnable;

typedef void  (WINAPI * GLENABLEVERTEXATTRIBARRAYPROC)(GLuint index);
extern GLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;

typedef void  (WINAPI * GLENABLEIPROC)(GLenum target,GLuint index);
extern GLENABLEIPROC glEnablei;

typedef void  (WINAPI * GLENDCONDITIONALRENDERPROC)();
extern GLENDCONDITIONALRENDERPROC glEndConditionalRender;

typedef void  (WINAPI * GLENDQUERYPROC)(GLenum target);
extern GLENDQUERYPROC glEndQuery;

typedef void  (WINAPI * GLENDTRANSFORMFEEDBACKPROC)();
extern GLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;

typedef GLsync  (WINAPI * GLFENCESYNCPROC)(GLenum condition,GLbitfield flags);
extern GLFENCESYNCPROC glFenceSync;

typedef void  (WINAPI * GLFINISHPROC)();
extern GLFINISHPROC glFinish;

typedef void  (WINAPI * GLFLUSHPROC)();
extern GLFLUSHPROC glFlush;

typedef void  (WINAPI * GLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target,GLintptr offset,GLsizeiptr length);
extern GLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;

typedef void  (WINAPI * GLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer);
extern GLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;

typedef void  (WINAPI * GLFRAMEBUFFERTEXTUREPROC)(GLenum target,GLenum attachment,GLuint texture,GLint level);
extern GLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

typedef void  (WINAPI * GLFRAMEBUFFERTEXTURE1DPROC)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
extern GLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;

typedef void  (WINAPI * GLFRAMEBUFFERTEXTURE2DPROC)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level);
extern GLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;

typedef void  (WINAPI * GLFRAMEBUFFERTEXTURE3DPROC)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset);
extern GLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;

typedef void  (WINAPI * GLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer);
extern GLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;

typedef void  (WINAPI * GLFRONTFACEPROC)(GLenum mode);
extern GLFRONTFACEPROC glFrontFace;

typedef void  (WINAPI * GLGENBUFFERSPROC)(GLsizei n,GLuint *buffers);
extern GLGENBUFFERSPROC glGenBuffers;

typedef void  (WINAPI * GLGENFRAMEBUFFERSPROC)(GLsizei n,GLuint *framebuffers);
extern GLGENFRAMEBUFFERSPROC glGenFramebuffers;

typedef void  (WINAPI * GLGENQUERIESPROC)(GLsizei n,GLuint *ids);
extern GLGENQUERIESPROC glGenQueries;

typedef void  (WINAPI * GLGENRENDERBUFFERSPROC)(GLsizei n,GLuint *renderbuffers);
extern GLGENRENDERBUFFERSPROC glGenRenderbuffers;

typedef void  (WINAPI * GLGENSAMPLERSPROC)(GLsizei count,GLuint *samplers);
extern GLGENSAMPLERSPROC glGenSamplers;

typedef void  (WINAPI * GLGENTEXTURESPROC)(GLsizei n,GLuint *textures);
extern GLGENTEXTURESPROC glGenTextures;

typedef void  (WINAPI * GLGENVERTEXARRAYSPROC)(GLsizei n,GLuint *arrays);
extern GLGENVERTEXARRAYSPROC glGenVertexArrays;

typedef void  (WINAPI * GLGENERATEMIPMAPPROC)(GLenum target);
extern GLGENERATEMIPMAPPROC glGenerateMipmap;

typedef void  (WINAPI * GLGETACTIVEATTRIBPROC)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
extern GLGETACTIVEATTRIBPROC glGetActiveAttrib;

typedef void  (WINAPI * GLGETACTIVEUNIFORMPROC)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name);
extern GLGETACTIVEUNIFORMPROC glGetActiveUniform;

typedef void  (WINAPI * GLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName);
extern GLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;

typedef void  (WINAPI * GLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params);
extern GLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;

typedef void  (WINAPI * GLGETACTIVEUNIFORMNAMEPROC)(GLuint program,GLuint uniformIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformName);
extern GLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;

typedef void  (WINAPI * GLGETACTIVEUNIFORMSIVPROC)(GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params);
extern GLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;

typedef void  (WINAPI * GLGETATTACHEDSHADERSPROC)(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders);
extern GLGETATTACHEDSHADERSPROC glGetAttachedShaders;

typedef GLint  (WINAPI * GLGETATTRIBLOCATIONPROC)(GLuint program,const GLchar *name);
extern GLGETATTRIBLOCATIONPROC glGetAttribLocation;

typedef void  (WINAPI * GLGETBOOLEANI_VPROC)(GLenum target,GLuint index,GLboolean *data);
extern GLGETBOOLEANI_VPROC glGetBooleani_v;

typedef void  (WINAPI * GLGETBOOLEANVPROC)(GLenum pname,GLboolean *data);
extern GLGETBOOLEANVPROC glGetBooleanv;

typedef void  (WINAPI * GLGETBUFFERPARAMETERI64VPROC)(GLenum target,GLenum pname,GLint64 *params);
extern GLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;

typedef void  (WINAPI * GLGETBUFFERPARAMETERIVPROC)(GLenum target,GLenum pname,GLint *params);
extern GLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;

typedef void  (WINAPI * GLGETBUFFERPOINTERVPROC)(GLenum target,GLenum pname,void **params);
extern GLGETBUFFERPOINTERVPROC glGetBufferPointerv;

typedef void  (WINAPI * GLGETBUFFERSUBDATAPROC)(GLenum target,GLintptr offset,GLsizeiptr size,void *data);
extern GLGETBUFFERSUBDATAPROC glGetBufferSubData;

typedef void  (WINAPI * GLGETCOMPRESSEDTEXIMAGEPROC)(GLenum target,GLint level,void *img);
extern GLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;

typedef void  (WINAPI * GLGETDOUBLEVPROC)(GLenum pname,GLdouble *data);
extern GLGETDOUBLEVPROC glGetDoublev;

typedef GLenum  (WINAPI * GLGETERRORPROC)();
extern GLGETERRORPROC glGetError;

typedef void  (WINAPI * GLGETFLOATVPROC)(GLenum pname,GLfloat *data);
extern GLGETFLOATVPROC glGetFloatv;

typedef GLint  (WINAPI * GLGETFRAGDATAINDEXPROC)(GLuint program,const GLchar *name);
extern GLGETFRAGDATAINDEXPROC glGetFragDataIndex;

typedef GLint  (WINAPI * GLGETFRAGDATALOCATIONPROC)(GLuint program,const GLchar *name);
extern GLGETFRAGDATALOCATIONPROC glGetFragDataLocation;

typedef void  (WINAPI * GLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target,GLenum attachment,GLenum pname,GLint *params);
extern GLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;

typedef void  (WINAPI * GLGETINTEGER64I_VPROC)(GLenum target,GLuint index,GLint64 *data);
extern GLGETINTEGER64I_VPROC glGetInteger64i_v;

typedef void  (WINAPI * GLGETINTEGER64VPROC)(GLenum pname,GLint64 *data);
extern GLGETINTEGER64VPROC glGetInteger64v;

typedef void  (WINAPI * GLGETINTEGERI_VPROC)(GLenum target,GLuint index,GLint *data);
extern GLGETINTEGERI_VPROC glGetIntegeri_v;

typedef void  (WINAPI * GLGETINTEGERVPROC)(GLenum pname,GLint *data);
extern GLGETINTEGERVPROC glGetIntegerv;

typedef void  (WINAPI * GLGETMULTISAMPLEFVPROC)(GLenum pname,GLuint index,GLfloat *val);
extern GLGETMULTISAMPLEFVPROC glGetMultisamplefv;

typedef void  (WINAPI * GLGETPROGRAMINFOLOGPROC)(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
extern GLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;

typedef void  (WINAPI * GLGETPROGRAMIVPROC)(GLuint program,GLenum pname,GLint *params);
extern GLGETPROGRAMIVPROC glGetProgramiv;

typedef void  (WINAPI * GLGETQUERYOBJECTI64VPROC)(GLuint id,GLenum pname,GLint64 *params);
extern GLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;

typedef void  (WINAPI * GLGETQUERYOBJECTIVPROC)(GLuint id,GLenum pname,GLint *params);
extern GLGETQUERYOBJECTIVPROC glGetQueryObjectiv;

typedef void  (WINAPI * GLGETQUERYOBJECTUI64VPROC)(GLuint id,GLenum pname,GLuint64 *params);
extern GLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;

typedef void  (WINAPI * GLGETQUERYOBJECTUIVPROC)(GLuint id,GLenum pname,GLuint *params);
extern GLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;

typedef void  (WINAPI * GLGETQUERYIVPROC)(GLenum target,GLenum pname,GLint *params);
extern GLGETQUERYIVPROC glGetQueryiv;

typedef void  (WINAPI * GLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target,GLenum pname,GLint *params);
extern GLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;

typedef void  (WINAPI * GLGETSAMPLERPARAMETERIIVPROC)(GLuint sampler,GLenum pname,GLint *params);
extern GLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;

typedef void  (WINAPI * GLGETSAMPLERPARAMETERIUIVPROC)(GLuint sampler,GLenum pname,GLuint *params);
extern GLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;

typedef void  (WINAPI * GLGETSAMPLERPARAMETERFVPROC)(GLuint sampler,GLenum pname,GLfloat *params);
extern GLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;

typedef void  (WINAPI * GLGETSAMPLERPARAMETERIVPROC)(GLuint sampler,GLenum pname,GLint *params);
extern GLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;

typedef void  (WINAPI * GLGETSHADERINFOLOGPROC)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog);
extern GLGETSHADERINFOLOGPROC glGetShaderInfoLog;

typedef void  (WINAPI * GLGETSHADERSOURCEPROC)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source);
extern GLGETSHADERSOURCEPROC glGetShaderSource;

typedef void  (WINAPI * GLGETSHADERIVPROC)(GLuint shader,GLenum pname,GLint *params);
extern GLGETSHADERIVPROC glGetShaderiv;

typedef const GLubyte * (WINAPI * GLGETSTRINGPROC)(GLenum name);
extern GLGETSTRINGPROC glGetString;

typedef const GLubyte * (WINAPI * GLGETSTRINGIPROC)(GLenum name,GLuint index);
extern GLGETSTRINGIPROC glGetStringi;

typedef void  (WINAPI * GLGETSYNCIVPROC)(GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values);
extern GLGETSYNCIVPROC glGetSynciv;

typedef void  (WINAPI * GLGETTEXIMAGEPROC)(GLenum target,GLint level,GLenum format,GLenum type,void *pixels);
extern GLGETTEXIMAGEPROC glGetTexImage;

typedef void  (WINAPI * GLGETTEXLEVELPARAMETERFVPROC)(GLenum target,GLint level,GLenum pname,GLfloat *params);
extern GLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv;

typedef void  (WINAPI * GLGETTEXLEVELPARAMETERIVPROC)(GLenum target,GLint level,GLenum pname,GLint *params);
extern GLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv;

typedef void  (WINAPI * GLGETTEXPARAMETERIIVPROC)(GLenum target,GLenum pname,GLint *params);
extern GLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;

typedef void  (WINAPI * GLGETTEXPARAMETERIUIVPROC)(GLenum target,GLenum pname,GLuint *params);
extern GLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;

typedef void  (WINAPI * GLGETTEXPARAMETERFVPROC)(GLenum target,GLenum pname,GLfloat *params);
extern GLGETTEXPARAMETERFVPROC glGetTexParameterfv;

typedef void  (WINAPI * GLGETTEXPARAMETERIVPROC)(GLenum target,GLenum pname,GLint *params);
extern GLGETTEXPARAMETERIVPROC glGetTexParameteriv;

typedef void  (WINAPI * GLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name);
extern GLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;

typedef GLuint  (WINAPI * GLGETUNIFORMBLOCKINDEXPROC)(GLuint program,const GLchar *uniformBlockName);
extern GLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;

typedef void  (WINAPI * GLGETUNIFORMINDICESPROC)(GLuint program,GLsizei uniformCount,const GLchar *const*uniformNames,GLuint *uniformIndices);
extern GLGETUNIFORMINDICESPROC glGetUniformIndices;

typedef GLint  (WINAPI * GLGETUNIFORMLOCATIONPROC)(GLuint program,const GLchar *name);
extern GLGETUNIFORMLOCATIONPROC glGetUniformLocation;

typedef void  (WINAPI * GLGETUNIFORMFVPROC)(GLuint program,GLint location,GLfloat *params);
extern GLGETUNIFORMFVPROC glGetUniformfv;

typedef void  (WINAPI * GLGETUNIFORMIVPROC)(GLuint program,GLint location,GLint *params);
extern GLGETUNIFORMIVPROC glGetUniformiv;

typedef void  (WINAPI * GLGETUNIFORMUIVPROC)(GLuint program,GLint location,GLuint *params);
extern GLGETUNIFORMUIVPROC glGetUniformuiv;

typedef void  (WINAPI * GLGETVERTEXATTRIBIIVPROC)(GLuint index,GLenum pname,GLint *params);
extern GLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;

typedef void  (WINAPI * GLGETVERTEXATTRIBIUIVPROC)(GLuint index,GLenum pname,GLuint *params);
extern GLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;

typedef void  (WINAPI * GLGETVERTEXATTRIBPOINTERVPROC)(GLuint index,GLenum pname,void **pointer);
extern GLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;

typedef void  (WINAPI * GLGETVERTEXATTRIBDVPROC)(GLuint index,GLenum pname,GLdouble *params);
extern GLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;

typedef void  (WINAPI * GLGETVERTEXATTRIBFVPROC)(GLuint index,GLenum pname,GLfloat *params);
extern GLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;

typedef void  (WINAPI * GLGETVERTEXATTRIBIVPROC)(GLuint index,GLenum pname,GLint *params);
extern GLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;

typedef void  (WINAPI * GLHINTPROC)(GLenum target,GLenum mode);
extern GLHINTPROC glHint;

typedef GLboolean  (WINAPI * GLISBUFFERPROC)(GLuint buffer);
extern GLISBUFFERPROC glIsBuffer;

typedef GLboolean  (WINAPI * GLISENABLEDPROC)(GLenum cap);
extern GLISENABLEDPROC glIsEnabled;

typedef GLboolean  (WINAPI * GLISENABLEDIPROC)(GLenum target,GLuint index);
extern GLISENABLEDIPROC glIsEnabledi;

typedef GLboolean  (WINAPI * GLISFRAMEBUFFERPROC)(GLuint framebuffer);
extern GLISFRAMEBUFFERPROC glIsFramebuffer;

typedef GLboolean  (WINAPI * GLISPROGRAMPROC)(GLuint program);
extern GLISPROGRAMPROC glIsProgram;

typedef GLboolean  (WINAPI * GLISQUERYPROC)(GLuint id);
extern GLISQUERYPROC glIsQuery;

typedef GLboolean  (WINAPI * GLISRENDERBUFFERPROC)(GLuint renderbuffer);
extern GLISRENDERBUFFERPROC glIsRenderbuffer;

typedef GLboolean  (WINAPI * GLISSAMPLERPROC)(GLuint sampler);
extern GLISSAMPLERPROC glIsSampler;

typedef GLboolean  (WINAPI * GLISSHADERPROC)(GLuint shader);
extern GLISSHADERPROC glIsShader;

typedef GLboolean  (WINAPI * GLISSYNCPROC)(GLsync sync);
extern GLISSYNCPROC glIsSync;

typedef GLboolean  (WINAPI * GLISTEXTUREPROC)(GLuint texture);
extern GLISTEXTUREPROC glIsTexture;

typedef GLboolean  (WINAPI * GLISVERTEXARRAYPROC)(GLuint array);
extern GLISVERTEXARRAYPROC glIsVertexArray;

typedef void  (WINAPI * GLLINEWIDTHPROC)(GLfloat width);
extern GLLINEWIDTHPROC glLineWidth;

typedef void  (WINAPI * GLLINKPROGRAMPROC)(GLuint program);
extern GLLINKPROGRAMPROC glLinkProgram;

typedef void  (WINAPI * GLLOGICOPPROC)(GLenum opcode);
extern GLLOGICOPPROC glLogicOp;

typedef void * (WINAPI * GLMAPBUFFERPROC)(GLenum target,GLenum access);
extern GLMAPBUFFERPROC glMapBuffer;

typedef void * (WINAPI * GLMAPBUFFERRANGEPROC)(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access);
extern GLMAPBUFFERRANGEPROC glMapBufferRange;

typedef void  (WINAPI * GLMULTIDRAWARRAYSPROC)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount);
extern GLMULTIDRAWARRAYSPROC glMultiDrawArrays;

typedef void  (WINAPI * GLMULTIDRAWELEMENTSPROC)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount);
extern GLMULTIDRAWELEMENTSPROC glMultiDrawElements;

typedef void  (WINAPI * GLMULTIDRAWELEMENTSBASEVERTEXPROC)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount,const GLint *basevertex);
extern GLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;

typedef void  (WINAPI * GLMULTITEXCOORDP1UIPROC)(GLenum texture,GLenum type,GLuint coords);
extern GLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;

typedef void  (WINAPI * GLMULTITEXCOORDP1UIVPROC)(GLenum texture,GLenum type,const GLuint *coords);
extern GLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;

typedef void  (WINAPI * GLMULTITEXCOORDP2UIPROC)(GLenum texture,GLenum type,GLuint coords);
extern GLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;

typedef void  (WINAPI * GLMULTITEXCOORDP2UIVPROC)(GLenum texture,GLenum type,const GLuint *coords);
extern GLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;

typedef void  (WINAPI * GLMULTITEXCOORDP3UIPROC)(GLenum texture,GLenum type,GLuint coords);
extern GLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;

typedef void  (WINAPI * GLMULTITEXCOORDP3UIVPROC)(GLenum texture,GLenum type,const GLuint *coords);
extern GLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;

typedef void  (WINAPI * GLMULTITEXCOORDP4UIPROC)(GLenum texture,GLenum type,GLuint coords);
extern GLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;

typedef void  (WINAPI * GLMULTITEXCOORDP4UIVPROC)(GLenum texture,GLenum type,const GLuint *coords);
extern GLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;

typedef void  (WINAPI * GLNORMALP3UIPROC)(GLenum type,GLuint coords);
extern GLNORMALP3UIPROC glNormalP3ui;

typedef void  (WINAPI * GLNORMALP3UIVPROC)(GLenum type,const GLuint *coords);
extern GLNORMALP3UIVPROC glNormalP3uiv;

typedef void  (WINAPI * GLPIXELSTOREFPROC)(GLenum pname,GLfloat param);
extern GLPIXELSTOREFPROC glPixelStoref;

typedef void  (WINAPI * GLPIXELSTOREIPROC)(GLenum pname,GLint param);
extern GLPIXELSTOREIPROC glPixelStorei;

typedef void  (WINAPI * GLPOINTPARAMETERFPROC)(GLenum pname,GLfloat param);
extern GLPOINTPARAMETERFPROC glPointParameterf;

typedef void  (WINAPI * GLPOINTPARAMETERFVPROC)(GLenum pname,const GLfloat *params);
extern GLPOINTPARAMETERFVPROC glPointParameterfv;

typedef void  (WINAPI * GLPOINTPARAMETERIPROC)(GLenum pname,GLint param);
extern GLPOINTPARAMETERIPROC glPointParameteri;

typedef void  (WINAPI * GLPOINTPARAMETERIVPROC)(GLenum pname,const GLint *params);
extern GLPOINTPARAMETERIVPROC glPointParameteriv;

typedef void  (WINAPI * GLPOINTSIZEPROC)(GLfloat size);
extern GLPOINTSIZEPROC glPointSize;

typedef void  (WINAPI * GLPOLYGONMODEPROC)(GLenum face,GLenum mode);
extern GLPOLYGONMODEPROC glPolygonMode;

typedef void  (WINAPI * GLPOLYGONOFFSETPROC)(GLfloat factor,GLfloat units);
extern GLPOLYGONOFFSETPROC glPolygonOffset;

typedef void  (WINAPI * GLPRIMITIVERESTARTINDEXPROC)(GLuint index);
extern GLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;

typedef void  (WINAPI * GLPROVOKINGVERTEXPROC)(GLenum mode);
extern GLPROVOKINGVERTEXPROC glProvokingVertex;

typedef void  (WINAPI * GLQUERYCOUNTERPROC)(GLuint id,GLenum target);
extern GLQUERYCOUNTERPROC glQueryCounter;

typedef void  (WINAPI * GLREADBUFFERPROC)(GLenum src);
extern GLREADBUFFERPROC glReadBuffer;

typedef void  (WINAPI * GLREADPIXELSPROC)(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels);
extern GLREADPIXELSPROC glReadPixels;

typedef void  (WINAPI * GLRENDERBUFFERSTORAGEPROC)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height);
extern GLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;

typedef void  (WINAPI * GLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height);
extern GLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;

typedef void  (WINAPI * GLSAMPLECOVERAGEPROC)(GLfloat value,GLboolean invert);
extern GLSAMPLECOVERAGEPROC glSampleCoverage;

typedef void  (WINAPI * GLSAMPLEMASKIPROC)(GLuint maskNumber,GLbitfield mask);
extern GLSAMPLEMASKIPROC glSampleMaski;

typedef void  (WINAPI * GLSAMPLERPARAMETERIIVPROC)(GLuint sampler,GLenum pname,const GLint *param);
extern GLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;

typedef void  (WINAPI * GLSAMPLERPARAMETERIUIVPROC)(GLuint sampler,GLenum pname,const GLuint *param);
extern GLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;

typedef void  (WINAPI * GLSAMPLERPARAMETERFPROC)(GLuint sampler,GLenum pname,GLfloat param);
extern GLSAMPLERPARAMETERFPROC glSamplerParameterf;

typedef void  (WINAPI * GLSAMPLERPARAMETERFVPROC)(GLuint sampler,GLenum pname,const GLfloat *param);
extern GLSAMPLERPARAMETERFVPROC glSamplerParameterfv;

typedef void  (WINAPI * GLSAMPLERPARAMETERIPROC)(GLuint sampler,GLenum pname,GLint param);
extern GLSAMPLERPARAMETERIPROC glSamplerParameteri;

typedef void  (WINAPI * GLSAMPLERPARAMETERIVPROC)(GLuint sampler,GLenum pname,const GLint *param);
extern GLSAMPLERPARAMETERIVPROC glSamplerParameteriv;

typedef void  (WINAPI * GLSCISSORPROC)(GLint x,GLint y,GLsizei width,GLsizei height);
extern GLSCISSORPROC glScissor;

typedef void  (WINAPI * GLSECONDARYCOLORP3UIPROC)(GLenum type,GLuint color);
extern GLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;

typedef void  (WINAPI * GLSECONDARYCOLORP3UIVPROC)(GLenum type,const GLuint *color);
extern GLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;

typedef void  (WINAPI * GLSHADERSOURCEPROC)(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length);
extern GLSHADERSOURCEPROC glShaderSource;

typedef void  (WINAPI * GLSTENCILFUNCPROC)(GLenum func,GLint ref,GLuint mask);
extern GLSTENCILFUNCPROC glStencilFunc;

typedef void  (WINAPI * GLSTENCILFUNCSEPARATEPROC)(GLenum face,GLenum func,GLint ref,GLuint mask);
extern GLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;

typedef void  (WINAPI * GLSTENCILMASKPROC)(GLuint mask);
extern GLSTENCILMASKPROC glStencilMask;

typedef void  (WINAPI * GLSTENCILMASKSEPARATEPROC)(GLenum face,GLuint mask);
extern GLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;

typedef void  (WINAPI * GLSTENCILOPPROC)(GLenum fail,GLenum zfail,GLenum zpass);
extern GLSTENCILOPPROC glStencilOp;

typedef void  (WINAPI * GLSTENCILOPSEPARATEPROC)(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass);
extern GLSTENCILOPSEPARATEPROC glStencilOpSeparate;

typedef void  (WINAPI * GLTEXBUFFERPROC)(GLenum target,GLenum internalformat,GLuint buffer);
extern GLTEXBUFFERPROC glTexBuffer;

typedef void  (WINAPI * GLTEXCOORDP1UIPROC)(GLenum type,GLuint coords);
extern GLTEXCOORDP1UIPROC glTexCoordP1ui;

typedef void  (WINAPI * GLTEXCOORDP1UIVPROC)(GLenum type,const GLuint *coords);
extern GLTEXCOORDP1UIVPROC glTexCoordP1uiv;

typedef void  (WINAPI * GLTEXCOORDP2UIPROC)(GLenum type,GLuint coords);
extern GLTEXCOORDP2UIPROC glTexCoordP2ui;

typedef void  (WINAPI * GLTEXCOORDP2UIVPROC)(GLenum type,const GLuint *coords);
extern GLTEXCOORDP2UIVPROC glTexCoordP2uiv;

typedef void  (WINAPI * GLTEXCOORDP3UIPROC)(GLenum type,GLuint coords);
extern GLTEXCOORDP3UIPROC glTexCoordP3ui;

typedef void  (WINAPI * GLTEXCOORDP3UIVPROC)(GLenum type,const GLuint *coords);
extern GLTEXCOORDP3UIVPROC glTexCoordP3uiv;

typedef void  (WINAPI * GLTEXCOORDP4UIPROC)(GLenum type,GLuint coords);
extern GLTEXCOORDP4UIPROC glTexCoordP4ui;

typedef void  (WINAPI * GLTEXCOORDP4UIVPROC)(GLenum type,const GLuint *coords);
extern GLTEXCOORDP4UIVPROC glTexCoordP4uiv;

typedef void  (WINAPI * GLTEXIMAGE1DPROC)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels);
extern GLTEXIMAGE1DPROC glTexImage1D;

typedef void  (WINAPI * GLTEXIMAGE2DPROC)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels);
extern GLTEXIMAGE2DPROC glTexImage2D;

typedef void  (WINAPI * GLTEXIMAGE2DMULTISAMPLEPROC)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations);
extern GLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;

typedef void  (WINAPI * GLTEXIMAGE3DPROC)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels);
extern GLTEXIMAGE3DPROC glTexImage3D;

typedef void  (WINAPI * GLTEXIMAGE3DMULTISAMPLEPROC)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations);
extern GLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;

typedef void  (WINAPI * GLTEXPARAMETERIIVPROC)(GLenum target,GLenum pname,const GLint *params);
extern GLTEXPARAMETERIIVPROC glTexParameterIiv;

typedef void  (WINAPI * GLTEXPARAMETERIUIVPROC)(GLenum target,GLenum pname,const GLuint *params);
extern GLTEXPARAMETERIUIVPROC glTexParameterIuiv;

typedef void  (WINAPI * GLTEXPARAMETERFPROC)(GLenum target,GLenum pname,GLfloat param);
extern GLTEXPARAMETERFPROC glTexParameterf;

typedef void  (WINAPI * GLTEXPARAMETERFVPROC)(GLenum target,GLenum pname,const GLfloat *params);
extern GLTEXPARAMETERFVPROC glTexParameterfv;

typedef void  (WINAPI * GLTEXPARAMETERIPROC)(GLenum target,GLenum pname,GLint param);
extern GLTEXPARAMETERIPROC glTexParameteri;

typedef void  (WINAPI * GLTEXPARAMETERIVPROC)(GLenum target,GLenum pname,const GLint *params);
extern GLTEXPARAMETERIVPROC glTexParameteriv;

typedef void  (WINAPI * GLTEXSUBIMAGE1DPROC)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels);
extern GLTEXSUBIMAGE1DPROC glTexSubImage1D;

typedef void  (WINAPI * GLTEXSUBIMAGE2DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels);
extern GLTEXSUBIMAGE2DPROC glTexSubImage2D;

typedef void  (WINAPI * GLTEXSUBIMAGE3DPROC)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels);
extern GLTEXSUBIMAGE3DPROC glTexSubImage3D;

typedef void  (WINAPI * GLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode);
extern GLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;

typedef void  (WINAPI * GLUNIFORM1FPROC)(GLint location,GLfloat v0);
extern GLUNIFORM1FPROC glUniform1f;

typedef void  (WINAPI * GLUNIFORM1FVPROC)(GLint location,GLsizei count,const GLfloat *value);
extern GLUNIFORM1FVPROC glUniform1fv;

typedef void  (WINAPI * GLUNIFORM1IPROC)(GLint location,GLint v0);
extern GLUNIFORM1IPROC glUniform1i;

typedef void  (WINAPI * GLUNIFORM1IVPROC)(GLint location,GLsizei count,const GLint *value);
extern GLUNIFORM1IVPROC glUniform1iv;

typedef void  (WINAPI * GLUNIFORM1UIPROC)(GLint location,GLuint v0);
extern GLUNIFORM1UIPROC glUniform1ui;

typedef void  (WINAPI * GLUNIFORM1UIVPROC)(GLint location,GLsizei count,const GLuint *value);
extern GLUNIFORM1UIVPROC glUniform1uiv;

typedef void  (WINAPI * GLUNIFORM2FPROC)(GLint location,GLfloat v0,GLfloat v1);
extern GLUNIFORM2FPROC glUniform2f;

typedef void  (WINAPI * GLUNIFORM2FVPROC)(GLint location,GLsizei count,const GLfloat *value);
extern GLUNIFORM2FVPROC glUniform2fv;

typedef void  (WINAPI * GLUNIFORM2IPROC)(GLint location,GLint v0,GLint v1);
extern GLUNIFORM2IPROC glUniform2i;

typedef void  (WINAPI * GLUNIFORM2IVPROC)(GLint location,GLsizei count,const GLint *value);
extern GLUNIFORM2IVPROC glUniform2iv;

typedef void  (WINAPI * GLUNIFORM2UIPROC)(GLint location,GLuint v0,GLuint v1);
extern GLUNIFORM2UIPROC glUniform2ui;

typedef void  (WINAPI * GLUNIFORM2UIVPROC)(GLint location,GLsizei count,const GLuint *value);
extern GLUNIFORM2UIVPROC glUniform2uiv;

typedef void  (WINAPI * GLUNIFORM3FPROC)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2);
extern GLUNIFORM3FPROC glUniform3f;

typedef void  (WINAPI * GLUNIFORM3FVPROC)(GLint location,GLsizei count,const GLfloat *value);
extern GLUNIFORM3FVPROC glUniform3fv;

typedef void  (WINAPI * GLUNIFORM3IPROC)(GLint location,GLint v0,GLint v1,GLint v2);
extern GLUNIFORM3IPROC glUniform3i;

typedef void  (WINAPI * GLUNIFORM3IVPROC)(GLint location,GLsizei count,const GLint *value);
extern GLUNIFORM3IVPROC glUniform3iv;

typedef void  (WINAPI * GLUNIFORM3UIPROC)(GLint location,GLuint v0,GLuint v1,GLuint v2);
extern GLUNIFORM3UIPROC glUniform3ui;

typedef void  (WINAPI * GLUNIFORM3UIVPROC)(GLint location,GLsizei count,const GLuint *value);
extern GLUNIFORM3UIVPROC glUniform3uiv;

typedef void  (WINAPI * GLUNIFORM4FPROC)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3);
extern GLUNIFORM4FPROC glUniform4f;

typedef void  (WINAPI * GLUNIFORM4FVPROC)(GLint location,GLsizei count,const GLfloat *value);
extern GLUNIFORM4FVPROC glUniform4fv;

typedef void  (WINAPI * GLUNIFORM4IPROC)(GLint location,GLint v0,GLint v1,GLint v2,GLint v3);
extern GLUNIFORM4IPROC glUniform4i;

typedef void  (WINAPI * GLUNIFORM4IVPROC)(GLint location,GLsizei count,const GLint *value);
extern GLUNIFORM4IVPROC glUniform4iv;

typedef void  (WINAPI * GLUNIFORM4UIPROC)(GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3);
extern GLUNIFORM4UIPROC glUniform4ui;

typedef void  (WINAPI * GLUNIFORM4UIVPROC)(GLint location,GLsizei count,const GLuint *value);
extern GLUNIFORM4UIVPROC glUniform4uiv;

typedef void  (WINAPI * GLUNIFORMBLOCKBINDINGPROC)(GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding);
extern GLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;

typedef void  (WINAPI * GLUNIFORMMATRIX2FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;

typedef void  (WINAPI * GLUNIFORMMATRIX2X3FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;

typedef void  (WINAPI * GLUNIFORMMATRIX2X4FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;

typedef void  (WINAPI * GLUNIFORMMATRIX3FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;

typedef void  (WINAPI * GLUNIFORMMATRIX3X2FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;

typedef void  (WINAPI * GLUNIFORMMATRIX3X4FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;

typedef void  (WINAPI * GLUNIFORMMATRIX4FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;

typedef void  (WINAPI * GLUNIFORMMATRIX4X2FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;

typedef void  (WINAPI * GLUNIFORMMATRIX4X3FVPROC)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value);
extern GLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;

typedef GLboolean  (WINAPI * GLUNMAPBUFFERPROC)(GLenum target);
extern GLUNMAPBUFFERPROC glUnmapBuffer;

typedef void  (WINAPI * GLUSEPROGRAMPROC)(GLuint program);
extern GLUSEPROGRAMPROC glUseProgram;

typedef void  (WINAPI * GLVALIDATEPROGRAMPROC)(GLuint program);
extern GLVALIDATEPROGRAMPROC glValidateProgram;

typedef void  (WINAPI * GLVERTEXATTRIB1DPROC)(GLuint index,GLdouble x);
extern GLVERTEXATTRIB1DPROC glVertexAttrib1d;

typedef void  (WINAPI * GLVERTEXATTRIB1DVPROC)(GLuint index,const GLdouble *v);
extern GLVERTEXATTRIB1DVPROC glVertexAttrib1dv;

typedef void  (WINAPI * GLVERTEXATTRIB1FPROC)(GLuint index,GLfloat x);
extern GLVERTEXATTRIB1FPROC glVertexAttrib1f;

typedef void  (WINAPI * GLVERTEXATTRIB1FVPROC)(GLuint index,const GLfloat *v);
extern GLVERTEXATTRIB1FVPROC glVertexAttrib1fv;

typedef void  (WINAPI * GLVERTEXATTRIB1SPROC)(GLuint index,GLshort x);
extern GLVERTEXATTRIB1SPROC glVertexAttrib1s;

typedef void  (WINAPI * GLVERTEXATTRIB1SVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIB1SVPROC glVertexAttrib1sv;

typedef void  (WINAPI * GLVERTEXATTRIB2DPROC)(GLuint index,GLdouble x,GLdouble y);
extern GLVERTEXATTRIB2DPROC glVertexAttrib2d;

typedef void  (WINAPI * GLVERTEXATTRIB2DVPROC)(GLuint index,const GLdouble *v);
extern GLVERTEXATTRIB2DVPROC glVertexAttrib2dv;

typedef void  (WINAPI * GLVERTEXATTRIB2FPROC)(GLuint index,GLfloat x,GLfloat y);
extern GLVERTEXATTRIB2FPROC glVertexAttrib2f;

typedef void  (WINAPI * GLVERTEXATTRIB2FVPROC)(GLuint index,const GLfloat *v);
extern GLVERTEXATTRIB2FVPROC glVertexAttrib2fv;

typedef void  (WINAPI * GLVERTEXATTRIB2SPROC)(GLuint index,GLshort x,GLshort y);
extern GLVERTEXATTRIB2SPROC glVertexAttrib2s;

typedef void  (WINAPI * GLVERTEXATTRIB2SVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIB2SVPROC glVertexAttrib2sv;

typedef void  (WINAPI * GLVERTEXATTRIB3DPROC)(GLuint index,GLdouble x,GLdouble y,GLdouble z);
extern GLVERTEXATTRIB3DPROC glVertexAttrib3d;

typedef void  (WINAPI * GLVERTEXATTRIB3DVPROC)(GLuint index,const GLdouble *v);
extern GLVERTEXATTRIB3DVPROC glVertexAttrib3dv;

typedef void  (WINAPI * GLVERTEXATTRIB3FPROC)(GLuint index,GLfloat x,GLfloat y,GLfloat z);
extern GLVERTEXATTRIB3FPROC glVertexAttrib3f;

typedef void  (WINAPI * GLVERTEXATTRIB3FVPROC)(GLuint index,const GLfloat *v);
extern GLVERTEXATTRIB3FVPROC glVertexAttrib3fv;

typedef void  (WINAPI * GLVERTEXATTRIB3SPROC)(GLuint index,GLshort x,GLshort y,GLshort z);
extern GLVERTEXATTRIB3SPROC glVertexAttrib3s;

typedef void  (WINAPI * GLVERTEXATTRIB3SVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIB3SVPROC glVertexAttrib3sv;

typedef void  (WINAPI * GLVERTEXATTRIB4NBVPROC)(GLuint index,const GLbyte *v);
extern GLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;

typedef void  (WINAPI * GLVERTEXATTRIB4NIVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;

typedef void  (WINAPI * GLVERTEXATTRIB4NSVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;

typedef void  (WINAPI * GLVERTEXATTRIB4NUBPROC)(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w);
extern GLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;

typedef void  (WINAPI * GLVERTEXATTRIB4NUBVPROC)(GLuint index,const GLubyte *v);
extern GLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;

typedef void  (WINAPI * GLVERTEXATTRIB4NUIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;

typedef void  (WINAPI * GLVERTEXATTRIB4NUSVPROC)(GLuint index,const GLushort *v);
extern GLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;

typedef void  (WINAPI * GLVERTEXATTRIB4BVPROC)(GLuint index,const GLbyte *v);
extern GLVERTEXATTRIB4BVPROC glVertexAttrib4bv;

typedef void  (WINAPI * GLVERTEXATTRIB4DPROC)(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w);
extern GLVERTEXATTRIB4DPROC glVertexAttrib4d;

typedef void  (WINAPI * GLVERTEXATTRIB4DVPROC)(GLuint index,const GLdouble *v);
extern GLVERTEXATTRIB4DVPROC glVertexAttrib4dv;

typedef void  (WINAPI * GLVERTEXATTRIB4FPROC)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w);
extern GLVERTEXATTRIB4FPROC glVertexAttrib4f;

typedef void  (WINAPI * GLVERTEXATTRIB4FVPROC)(GLuint index,const GLfloat *v);
extern GLVERTEXATTRIB4FVPROC glVertexAttrib4fv;

typedef void  (WINAPI * GLVERTEXATTRIB4IVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIB4IVPROC glVertexAttrib4iv;

typedef void  (WINAPI * GLVERTEXATTRIB4SPROC)(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w);
extern GLVERTEXATTRIB4SPROC glVertexAttrib4s;

typedef void  (WINAPI * GLVERTEXATTRIB4SVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIB4SVPROC glVertexAttrib4sv;

typedef void  (WINAPI * GLVERTEXATTRIB4UBVPROC)(GLuint index,const GLubyte *v);
extern GLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;

typedef void  (WINAPI * GLVERTEXATTRIB4UIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;

typedef void  (WINAPI * GLVERTEXATTRIB4USVPROC)(GLuint index,const GLushort *v);
extern GLVERTEXATTRIB4USVPROC glVertexAttrib4usv;

typedef void  (WINAPI * GLVERTEXATTRIBDIVISORPROC)(GLuint index,GLuint divisor);
extern GLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;

typedef void  (WINAPI * GLVERTEXATTRIBI1IPROC)(GLuint index,GLint x);
extern GLVERTEXATTRIBI1IPROC glVertexAttribI1i;

typedef void  (WINAPI * GLVERTEXATTRIBI1IVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;

typedef void  (WINAPI * GLVERTEXATTRIBI1UIPROC)(GLuint index,GLuint x);
extern GLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;

typedef void  (WINAPI * GLVERTEXATTRIBI1UIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;

typedef void  (WINAPI * GLVERTEXATTRIBI2IPROC)(GLuint index,GLint x,GLint y);
extern GLVERTEXATTRIBI2IPROC glVertexAttribI2i;

typedef void  (WINAPI * GLVERTEXATTRIBI2IVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;

typedef void  (WINAPI * GLVERTEXATTRIBI2UIPROC)(GLuint index,GLuint x,GLuint y);
extern GLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;

typedef void  (WINAPI * GLVERTEXATTRIBI2UIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;

typedef void  (WINAPI * GLVERTEXATTRIBI3IPROC)(GLuint index,GLint x,GLint y,GLint z);
extern GLVERTEXATTRIBI3IPROC glVertexAttribI3i;

typedef void  (WINAPI * GLVERTEXATTRIBI3IVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;

typedef void  (WINAPI * GLVERTEXATTRIBI3UIPROC)(GLuint index,GLuint x,GLuint y,GLuint z);
extern GLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;

typedef void  (WINAPI * GLVERTEXATTRIBI3UIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;

typedef void  (WINAPI * GLVERTEXATTRIBI4BVPROC)(GLuint index,const GLbyte *v);
extern GLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;

typedef void  (WINAPI * GLVERTEXATTRIBI4IPROC)(GLuint index,GLint x,GLint y,GLint z,GLint w);
extern GLVERTEXATTRIBI4IPROC glVertexAttribI4i;

typedef void  (WINAPI * GLVERTEXATTRIBI4IVPROC)(GLuint index,const GLint *v);
extern GLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;

typedef void  (WINAPI * GLVERTEXATTRIBI4SVPROC)(GLuint index,const GLshort *v);
extern GLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;

typedef void  (WINAPI * GLVERTEXATTRIBI4UBVPROC)(GLuint index,const GLubyte *v);
extern GLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;

typedef void  (WINAPI * GLVERTEXATTRIBI4UIPROC)(GLuint index,GLuint x,GLuint y,GLuint z,GLuint w);
extern GLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;

typedef void  (WINAPI * GLVERTEXATTRIBI4UIVPROC)(GLuint index,const GLuint *v);
extern GLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;

typedef void  (WINAPI * GLVERTEXATTRIBI4USVPROC)(GLuint index,const GLushort *v);
extern GLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;

typedef void  (WINAPI * GLVERTEXATTRIBIPOINTERPROC)(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer);
extern GLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;

typedef void  (WINAPI * GLVERTEXATTRIBP1UIPROC)(GLuint index,GLenum type,GLboolean normalized,GLuint value);
extern GLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;

typedef void  (WINAPI * GLVERTEXATTRIBP1UIVPROC)(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
extern GLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;

typedef void  (WINAPI * GLVERTEXATTRIBP2UIPROC)(GLuint index,GLenum type,GLboolean normalized,GLuint value);
extern GLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;

typedef void  (WINAPI * GLVERTEXATTRIBP2UIVPROC)(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
extern GLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;

typedef void  (WINAPI * GLVERTEXATTRIBP3UIPROC)(GLuint index,GLenum type,GLboolean normalized,GLuint value);
extern GLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;

typedef void  (WINAPI * GLVERTEXATTRIBP3UIVPROC)(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
extern GLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;

typedef void  (WINAPI * GLVERTEXATTRIBP4UIPROC)(GLuint index,GLenum type,GLboolean normalized,GLuint value);
extern GLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;

typedef void  (WINAPI * GLVERTEXATTRIBP4UIVPROC)(GLuint index,GLenum type,GLboolean normalized,const GLuint *value);
extern GLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;

typedef void  (WINAPI * GLVERTEXATTRIBPOINTERPROC)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer);
extern GLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;

typedef void  (WINAPI * GLVERTEXP2UIPROC)(GLenum type,GLuint value);
extern GLVERTEXP2UIPROC glVertexP2ui;

typedef void  (WINAPI * GLVERTEXP2UIVPROC)(GLenum type,const GLuint *value);
extern GLVERTEXP2UIVPROC glVertexP2uiv;

typedef void  (WINAPI * GLVERTEXP3UIPROC)(GLenum type,GLuint value);
extern GLVERTEXP3UIPROC glVertexP3ui;

typedef void  (WINAPI * GLVERTEXP3UIVPROC)(GLenum type,const GLuint *value);
extern GLVERTEXP3UIVPROC glVertexP3uiv;

typedef void  (WINAPI * GLVERTEXP4UIPROC)(GLenum type,GLuint value);
extern GLVERTEXP4UIPROC glVertexP4ui;

typedef void  (WINAPI * GLVERTEXP4UIVPROC)(GLenum type,const GLuint *value);
extern GLVERTEXP4UIVPROC glVertexP4uiv;

typedef void  (WINAPI * GLVIEWPORTPROC)(GLint x,GLint y,GLsizei width,GLsizei height);
extern GLVIEWPORTPROC glViewport;

typedef void  (WINAPI * GLWAITSYNCPROC)(GLsync sync,GLbitfield flags,GLuint64 timeout);
extern GLWAITSYNCPROC glWaitSync;

