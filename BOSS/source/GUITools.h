#pragma once

#include "Common.h"

#include "Position.hpp"
#include <SDL.h>
#include <SDL_opengl.h>

namespace BOSS
{
    namespace GUITools
    {
        const int FLIP_VERTICAL = 1;
        const int FLIP_HORIZONTAL = 2;

        void DrawLine(const Position & p1, const Position & p2, const float thickness, const GLfloat * rgba);
        void DrawString(const Position & p, const std::string & text, const GLfloat * rgba);
        void DrawStringLarge(const Position & p, const std::string & text, const GLfloat * rgba);
        void DrawStringWithShadow(const Position & p, const std::string & text, const GLfloat * rgba);
        void DrawStringLargeWithShadow(const Position & p, const std::string & text, const GLfloat * rgba);
        void DrawCircle(const Position & p, float r, int num_segments);
        void DrawTexturedRect(const Position & tl, const Position & br, const int & textureID, const GLfloat * rgba); 
        void DrawRect(const Position & tl, const Position & br, const GLfloat * rgba); 
        void DrawRectGradient(const Position & tl, const Position & br, const GLfloat * rgbaLeft, const GLfloat * rgbaRight); 
        void SetColor(const GLfloat * src, GLfloat * dest);
        void SetColor(const GLfloat * src, GLfloat * dest);

    }
}
