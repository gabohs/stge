#include <iostream>
#include <windows.h>

#include "../../Engine/stge.h"

int main()
{   
    st::Screen screen({75, 40}, '#');
    st::Renderer renderer(screen);

    screen.hideCursor();

    st::Point Player('@', {10, 10});

    while (true)
    {
        renderer.draw(Player);
        
        renderer.render();
        screen.refresh();
        Sleep(10);
    }

    return 0;
}