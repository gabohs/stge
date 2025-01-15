#pragma once

#include "../Math/Vector2.h"

namespace st
{
    class Point
    {
    private:
        char m_Char; // character that is drawn to the screen, like '#', '@', etc to represent a character, etc
        st::Vector2 m_Coords;

    public:
        Point(char Char, st::Vector2 initialPos);

        char getSymbol();
        st::Vector2 getPosition();
        void setPosition(st::Vector2 newCoords);
    };
}