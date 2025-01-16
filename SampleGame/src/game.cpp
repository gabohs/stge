#include <iostream>
#include <windows.h>

#include "../../Engine/stge.h"

int main()
{   
    st::Screen screen({75, 40}, '#');
    st::Renderer renderer(screen);

    screen.hideCursor();

    st::Point Player('@', {10, 10});
    st::Point Player2('*', {15, 15});

    
    while (true)
    {       
        renderer.draw(Player);
        renderer.draw(Player2);

        
        if (st::InputHandler::isKeyPressed('w'))
        {
            Player.setPosition().y -= 1;
        }
        if (st::InputHandler::isKeyPressed('d'))
        {
            Player.setPosition().x += 1;
        }
        if (st::InputHandler::isKeyPressed('a'))
        {
            Player.setPosition().x -= 1;
        }
        if (st::InputHandler::isKeyPressed('s'))
        {
            Player.setPosition().y += 1;
        }

        renderer.render();
        screen.refresh();
        
        Sleep(16);
    }
    
    return 0;
}