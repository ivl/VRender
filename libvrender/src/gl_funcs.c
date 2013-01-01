/*
 *  Copyright (C) 2012 Evgeny Panov
 *  This file is part of libvrender.
 *
 *  libvrender is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libvrender is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libvrender.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef __WIN32

#include "gl_funcs.h"
#include "common.h"

// указатели на все используемые ф-ии OpenGL

#ifndef __gl_h_
// 1.0
PFNGLGENTEXTURESPROC glGenTextures = 0;
PFNGLDELETETEXTURESPROC glDeleteTextures = 0;
PFNGLBINDTEXTUREPROC glBindTexture = 0;
PFNGLDRAWARRAYSPROC glDrawArrays = 0;
PFNGLDRAWELEMENTSPROC glDrawElements = 0;

// 1.1
PFNGLVIEWPORTPROC glViewport = 0;
PFNGLCLEARPROC glClear = 0;
PFNGLCLEARCOLORPROC glClearColor = 0;
PFNGLCLEARDEPTHPROC glClearDepth = 0;
PFNGLDEPTHFUNCPROC glDepthFunc = 0;
PFNGLGETERRORPROC glGetError = 0;
PFNGLGETINTEGERVPROC glGetIntegerv = 0;
PFNGLGETSTRINGPROC glGetString = 0;
PFNGLDISABLEPROC glDisable = 0;
PFNGLENABLEPROC glEnable = 0;
PFNGLFRONTFACEPROC glFrontFace = 0;
PFNGLCULLFACEPROC glCullFace = 0;
PFNGLTEXPARAMETERIPROC glTexParameteri = 0;
PFNGLTEXIMAGE1DPROC glTexImage1D = 0;
PFNGLTEXIMAGE2DPROC glTexImage2D = 0;
#endif

PFNGLTEXIMAGE3DPROC glTexImage3D = 0;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap = 0;

PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = 0;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = 0;
PFNGLGENBUFFERSPROC glGenBuffers = 0;
PFNGLBINDBUFFERPROC glBindBuffer = 0;
PFNGLBUFFERDATAPROC glBufferData = 0;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = 0;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = 0;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = 0;
PFNGLACTIVETEXTUREPROC glActiveTexture = 0;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = 0;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = 0;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = 0;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = 0;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = 0;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = 0;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = 0;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = 0;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = 0;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = 0;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = 0;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = 0;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = 0;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = 0;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = 0;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = 0;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = 0;

PFNGLSHADERSOURCEPROC glShaderSource = 0;
PFNGLCOMPILESHADERPROC glCompileShader = 0;
PFNGLGETSHADERIVPROC glGetShaderiv = 0;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = 0;
PFNGLCREATESHADERPROC glCreateShader = 0;
PFNGLDELETESHADERPROC glDeleteShader = 0;
PFNGLGETPROGRAMIVPROC glGetProgramiv = 0;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = 0;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = 0;
PFNGLCREATEPROGRAMPROC glCreateProgram = 0;
PFNGLDELETEPROGRAMPROC glDeleteProgram = 0;
PFNGLLINKPROGRAMPROC glLinkProgram = 0;
PFNGLATTACHSHADERPROC glAttachShader = 0;
PFNGLDETACHSHADERPROC glDetachShader = 0;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = 0;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = 0;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = 0;
PFNGLUSEPROGRAMPROC glUseProgram = 0;
PFNGLUNIFORM1IPROC glUniform1i = 0;
PFNGLUNIFORM1FPROC glUniform1f = 0;
PFNGLUNIFORM1FVPROC glUniform1fv = 0;
PFNGLUNIFORM1DPROC glUniform1d = 0;
PFNGLUNIFORM1DVPROC glUniform1dv = 0;
PFNGLUNIFORM2IPROC glUniform2i = 0;
PFNGLUNIFORM2FPROC glUniform2f = 0;
PFNGLUNIFORM2FVPROC glUniform2fv = 0;
PFNGLUNIFORM2DPROC glUniform2d = 0;
PFNGLUNIFORM2DVPROC glUniform2dv = 0;
PFNGLUNIFORM3IPROC glUniform3i = 0;
PFNGLUNIFORM3FPROC glUniform3f = 0;
PFNGLUNIFORM3FVPROC glUniform3fv = 0;
PFNGLUNIFORM3DPROC glUniform3d = 0;
PFNGLUNIFORM3DVPROC glUniform3dv = 0;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = 0;
PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = 0;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = 0;
PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = 0;
PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = 0;

void gl_funcs_init(void)
{
	// получаем адреса ф-ий OpenGL
	
	TRACE_MSG("init OpenGL functions pointers\n");
	
    #ifndef __gl_h_
    // 1.0
    GL_GET_PROC_ADR(PFNGLGENTEXTURES, glGenTextures);
    GL_GET_PROC_ADR(PFNGLDELETETEXTURES, glDeleteTextures);
    GL_GET_PROC_ADR(PFNGLBINDTEXTURE, glBindTexture);
    GL_GET_PROC_ADR(PFNGLDRAWARRAYS, glDrawArrays);
    GL_GET_PROC_ADR(PFNGLDRAWELEMENTS, glDrawElements);

    // 1.1
    GL_GET_PROC_ADR(PFNGLVIEWPORT, glViewport);
    GL_GET_PROC_ADR(PFNGLCLEAR, glClear);
    GL_GET_PROC_ADR(PFNGLCLEARCOLOR, glClearColor);
    GL_GET_PROC_ADR(PFNGLCLEARDEPTH, glClearDepth);
    GL_GET_PROC_ADR(PFNGLDEPTHFUNC, glDepthFunc);
    GL_GET_PROC_ADR(PFNGLGETERROR, glGetError);
    GL_GET_PROC_ADR(PFNGLGETINTEGERV, glGetIntegerv);
    GL_GET_PROC_ADR(PFNGLGETSTRING, glGetString);
    GL_GET_PROC_ADR(PFNGLDISABLE, glDisable);
    GL_GET_PROC_ADR(PFNGLENABLE, glEnable);
    GL_GET_PROC_ADR(PFNGLFRONTFACE, glFrontFace);
    GL_GET_PROC_ADR(PFNGLCULLFACE, glCullFace);
    GL_GET_PROC_ADR(PFNGLTEXPARAMETERI, glTexParameteri);
    GL_GET_PROC_ADR(PFNGLTEXIMAGE1D, glTexImage1D);
    GL_GET_PROC_ADR(PFNGLTEXIMAGE2D, glTexImage2D);
    #endif

	GL_GET_PROC_ADR(PFNGLTEXIMAGE3DPROC, glTexImage3D);
	GL_GET_PROC_ADR(PFNGLGENERATEMIPMAPPROC, glGenerateMipmap);
	
	GL_GET_PROC_ADR(PFNGLGENVERTEXARRAYSPROC, glGenVertexArrays);
	GL_GET_PROC_ADR(PFNGLBINDVERTEXARRAYPROC, glBindVertexArray);
	GL_GET_PROC_ADR(PFNGLGENBUFFERSPROC, glGenBuffers);
	GL_GET_PROC_ADR(PFNGLBINDBUFFERPROC, glBindBuffer);
	GL_GET_PROC_ADR(PFNGLBUFFERDATAPROC, glBufferData);
	GL_GET_PROC_ADR(PFNGLGETBUFFERSUBDATAPROC, glGetBufferSubData);
	GL_GET_PROC_ADR(PFNGLVERTEXATTRIBPOINTERPROC, glVertexAttribPointer);
	GL_GET_PROC_ADR(PFNGLENABLEVERTEXATTRIBARRAYPROC, glEnableVertexAttribArray);
	
	GL_GET_PROC_ADR(PFNGLACTIVETEXTUREPROC, glActiveTexture);
	GL_GET_PROC_ADR(PFNGLDELETEBUFFERSPROC, glDeleteBuffers);
	GL_GET_PROC_ADR(PFNGLGETBUFFERPARAMETERIVPROC, glGetBufferParameteriv);
	GL_GET_PROC_ADR(PFNGLDELETEVERTEXARRAYSPROC, glDeleteVertexArrays);
	GL_GET_PROC_ADR(PFNGLBINDFRAMEBUFFERPROC, glBindFramebuffer);
	GL_GET_PROC_ADR(PFNGLGENFRAMEBUFFERSPROC, glGenFramebuffers);
	GL_GET_PROC_ADR(PFNGLDELETEFRAMEBUFFERSPROC, glDeleteFramebuffers);
	GL_GET_PROC_ADR(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC, glGetFramebufferAttachmentParameteriv);
	GL_GET_PROC_ADR(PFNGLCHECKFRAMEBUFFERSTATUSPROC, glCheckFramebufferStatus);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERTEXTURE1DPROC, glFramebufferTexture1D);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERTEXTURE2DPROC, glFramebufferTexture2D);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERTEXTURE3DPROC, glFramebufferTexture3D);
	GL_GET_PROC_ADR(PFNGLRENDERBUFFERSTORAGEPROC, glRenderbufferStorage);
	GL_GET_PROC_ADR(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC, glRenderbufferStorageMultisample);
	GL_GET_PROC_ADR(PFNGLDELETERENDERBUFFERSPROC, glDeleteRenderbuffers);
	GL_GET_PROC_ADR(PFNGLBINDRENDERBUFFERPROC, glBindRenderbuffer);
	GL_GET_PROC_ADR(PFNGLDELETERENDERBUFFERSPROC, glDeleteRenderbuffers);
	GL_GET_PROC_ADR(PFNGLFRAMEBUFFERRENDERBUFFERPROC, glFramebufferRenderbuffer);
	GL_GET_PROC_ADR(PFNGLGENRENDERBUFFERSPROC, glGenRenderbuffers);
	
	GL_GET_PROC_ADR(PFNGLSHADERSOURCEPROC, glShaderSource);
	GL_GET_PROC_ADR(PFNGLCOMPILESHADERPROC, glCompileShader);
	GL_GET_PROC_ADR(PFNGLGETSHADERIVPROC, glGetShaderiv);
	GL_GET_PROC_ADR(PFNGLGETSHADERINFOLOGPROC, glGetShaderInfoLog);
	GL_GET_PROC_ADR(PFNGLCREATESHADERPROC, glCreateShader);
	GL_GET_PROC_ADR(PFNGLDELETESHADERPROC, glDeleteShader);
	GL_GET_PROC_ADR(PFNGLGETPROGRAMIVPROC, glGetProgramiv);
	GL_GET_PROC_ADR(PFNGLGETPROGRAMINFOLOGPROC, glGetProgramInfoLog);
	GL_GET_PROC_ADR(PFNGLVALIDATEPROGRAMPROC, glValidateProgram);
	GL_GET_PROC_ADR(PFNGLCREATEPROGRAMPROC, glCreateProgram);
	GL_GET_PROC_ADR(PFNGLDELETEPROGRAMPROC, glDeleteProgram);
	GL_GET_PROC_ADR(PFNGLLINKPROGRAMPROC, glLinkProgram);
	GL_GET_PROC_ADR(PFNGLATTACHSHADERPROC, glAttachShader);
	GL_GET_PROC_ADR(PFNGLDETACHSHADERPROC, glDetachShader);
	GL_GET_PROC_ADR(PFNGLGETATTRIBLOCATIONPROC, glGetAttribLocation);
	GL_GET_PROC_ADR(PFNGLGETUNIFORMLOCATIONPROC, glGetUniformLocation);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX4FVPROC, glUniformMatrix4fv);
	GL_GET_PROC_ADR(PFNGLUSEPROGRAMPROC, glUseProgram);
	
	GL_GET_PROC_ADR(PFNGLUNIFORM1IPROC, glUniform1i);
	GL_GET_PROC_ADR(PFNGLUNIFORM1FPROC, glUniform1f);
	GL_GET_PROC_ADR(PFNGLUNIFORM1FVPROC, glUniform1fv);
	GL_GET_PROC_ADR(PFNGLUNIFORM1DPROC, glUniform1d);
	GL_GET_PROC_ADR(PFNGLUNIFORM1DVPROC, glUniform1dv);
	GL_GET_PROC_ADR(PFNGLUNIFORM2IPROC, glUniform2i);
	GL_GET_PROC_ADR(PFNGLUNIFORM2FPROC, glUniform2f);
	GL_GET_PROC_ADR(PFNGLUNIFORM2FVPROC, glUniform2fv);
	GL_GET_PROC_ADR(PFNGLUNIFORM2DPROC, glUniform2d);
	GL_GET_PROC_ADR(PFNGLUNIFORM2DVPROC, glUniform2dv);
	GL_GET_PROC_ADR(PFNGLUNIFORM3IPROC, glUniform3i);
	GL_GET_PROC_ADR(PFNGLUNIFORM3FPROC, glUniform3f);
	GL_GET_PROC_ADR(PFNGLUNIFORM3FVPROC, glUniform3fv);
	GL_GET_PROC_ADR(PFNGLUNIFORM3DPROC, glUniform3d);
	GL_GET_PROC_ADR(PFNGLUNIFORM3DVPROC, glUniform3dv);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX2FVPROC, glUniformMatrix2fv);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX2DVPROC, glUniformMatrix2dv);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX3FVPROC, glUniformMatrix3fv);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX3DVPROC, glUniformMatrix3dv);
	GL_GET_PROC_ADR(PFNGLUNIFORMMATRIX4DVPROC, glUniformMatrix4dv);

}

#endif /* __WIN32 */
