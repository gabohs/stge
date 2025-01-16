#pragma once

#include "../Math/Vector2.h"

namespace st
{
    class Cursor
    {
    private:


    public:
        static void gotoxy(st::Vector2 position);
        static void hideCursor();
        static void showCursor();
        static void gotoHome();

    };
}