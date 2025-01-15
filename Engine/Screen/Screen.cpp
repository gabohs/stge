#include "Screen.h"
#include <stdlib.h>
#include <stdio.h>

namespace st
{
    Screen::Screen(st::Vector2 size, char edgeChar)
    {
        m_Size = size;
        m_edgeChar = edgeChar;
    }
    
    st::Vector2 Screen::getSize()
    {
        return m_Size;
    }
    char Screen::getEdgeChar()
    {
        return m_edgeChar;
    }

    void Screen::hideCursor()
    {
        printf("\033[?25l");
        fflush(stdout);
    }

    void Screen::showCursor()
    {
        printf("\033[?25h");
        fflush(stdout);
    }

    void Screen::refresh()
    {   
        #if defined(_WIN32) || defined(_WIN64)
            system("cls");

        #else
            system("clear") // for linux systems

        #endif
    }
}