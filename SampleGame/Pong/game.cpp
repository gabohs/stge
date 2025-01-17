#include "../../Engine/stge.h"
#include <iostream>
#include <windows.h>
#include <time.h>

#include "Paddle.h"
#include "Ball.h"


int main()
{   
    srand( (int)time(NULL) );

    st::Screen screen({90, 40}, '#');
    st::Renderer renderer(screen);
    st::Cursor::hideCursor();

    Paddle paddle({43, 37});
    Ball ball({40, 2});

    screen.refresh();
    
    while (!(st::InputHandler::isKeyPressed('q')))
    {   
        paddle.move();
        ball.handleCollisions(paddle);
        ball.update();

        renderer.draw(paddle.getPaddle());
        renderer.draw(ball.getBall());

        renderer.render();
        renderer.clearBuffer();

        st::Cursor::gotoHome();

        if (st::InputHandler::isKeyPressed('r')) screen.refresh();
        
        Sleep(16);
        
    }
    
    return 0;
}