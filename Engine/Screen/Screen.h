#pragma once

#include "../Math/Vector2.h"

namespace st
{
    class Screen
    {
    private:
        st::Vector2 m_Size;
        char m_edgeChar; // outline of the screen

    public:
        Screen(st::Vector2 size, char edgeChar);
        
        st::Vector2 getSize();
        char getEdgeChar();

        void refresh();
    };
} 


