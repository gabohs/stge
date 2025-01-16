#include <iostream>
#include <windows.h>

#include "../../Engine/stge.h"
#include <vector>

int main()
{   
    st::Screen screen({75, 40}, '#');
    st::Renderer renderer(screen);

    screen.hideCursor();

    st::Point Player('@', {10, 10});
    st::Point Player2('*', {15, 15});

    std::vector<st::Point> Snake{ st::Point('x', {20, 20}), st::Point('o', {20, 21})};
    
    
    while (!(st::InputHandler::isKeyPressed('q')))
    {   
        // renderer.draw(Player);
        // renderer.draw(Player2);

        renderer.draw(Snake);

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
        renderer.clearBuffer();
        screen.refresh();
        
        Sleep(16);
    }
    
    return 0;
}