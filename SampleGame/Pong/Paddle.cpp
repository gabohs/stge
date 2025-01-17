#include "Paddle.h"

Paddle::Paddle(st::Vector2 initialPos)
{   
    // populate paddle vector
    for (int i = initialPos.x; i < initialPos.x + 5; i++)
    {
        m_shape.push_back(st::Point('#', {i, initialPos.y}));
    }

    direction = NONE;
}

std::vector<st::Point> &Paddle::getPaddle()
{
    return m_shape;
}

void Paddle::move()
{   
    if (st::InputHandler::isKeyPressed('a')) direction = LEFT;
    if (st::InputHandler::isKeyPressed('d')) direction = RIGHT;

    if (direction == LEFT && m_shape[0].getPosition().x > 1)
    {
        for (st::Point& p : m_shape)
        {
            p.setPosition().x -= 1;
        }
    }

    if (direction == RIGHT && m_shape.back().getPosition().x < 88)
    {
        for (st::Point& p : m_shape)
        {
            p.setPosition().x += 1;
        }
    }
    
}

int Paddle::getPaddleLeft()
{
    return m_shape[0].getPosition().x;
}

Paddle::Direction Paddle::getDir()
{
    return direction;
}
