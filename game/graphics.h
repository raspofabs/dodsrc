#ifndef _PLATFORM_H_
#define _PLATFORM_H_

#if defined( __MACH__ )
#elif defined( _WIN32 )
#else
#define _LINUX
#endif

#define GL_GLEXT_PROTOTYPES
#include <GL/glfw.h>
#if _WIN32
#include "glhack.h"
#else
#endif

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef uint8_t U8;
typedef int8_t S8;
typedef uint16_t U16;
typedef int16_t S16;
typedef uint32_t U32;
typedef int32_t S32;
typedef float F32;
typedef uint64_t U64;
typedef int64_t S64;

GLuint GLMemoryTexture(S32 nW, S32 nH, U32* pnImage, int bCreateMipChain, int nFormat = 0);

float GLPerspectiveFactorX();
float GLPerspectiveFactorY();
void InitDrawing();
void game_on_draw( double gameTime );

// tools for drawing from other drawing update functions
void ClearScreen( float r, float g, float b );
void DefaultOrtho();
void DrawSquare( float x, float y, float width, float height, uint32_t colour );
void SetTexture(GLuint textureID, int slotID);
void SetTexture(const char* pName, int slotID);
void ClearTexture();

#endif
