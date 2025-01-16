#include "Cursor.h"
#include <iostream>

namespace st
{
    void Cursor::gotoxy(st::Vector2 position)
    {
        printf("\x1b[%d;%dH", position.y, position.x);
    }

    void Cursor::hideCursor()
    {
        printf("\033[?25l");
        fflush(stdout);
    }

    void Cursor::showCursor()
    {
        printf("\033[?25h");
        fflush(stdout);
    }

    void Cursor::gotoHome()
    {
        gotoxy({0, 0});
    }
}
