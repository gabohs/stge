#include "Ball.h"

Ball::Ball(st::Vector2 initialPos) : m_point('O', initialPos)
{  
    m_speed = 1;
    m_directionX = 1;
    m_directionY = 1;
}

void Ball::handleCollisions(Paddle pad)
{   
    // collides with bottom
    if (m_point.getPosition().y > 40)
    {   
        m_point.setPosition() = {
            rand() % 50, 
            1
        };
        m_directionY = -m_directionY;
        
    }

    // collides with top
    if (m_point.getPosition().y < 1)
    {   
        m_directionY = -m_directionY;
    }

    // collides with sides
    if (m_point.getPosition().x < 1 || m_point.getPosition().x > 88)
    {   
        m_directionX = -m_directionX;
    }   

    // collides with paddle
    for (st::Point& p : pad.getPaddle())
    {
        if (m_point.getPosition().x == p.getPosition().x && m_point.getPosition().y == p.getPosition().y)
        {   
            m_directionY = -m_directionY;
        }
    }
}

void Ball::update()
{
    m_point.setPosition().y += m_directionY * m_speed;
    m_point.setPosition().x += m_directionX * m_speed;
}

st::Point &Ball::getBall()
{
    return m_point;
}

int Ball::getDirectionY()
{
    return m_directionY;
}

int Ball::getDirectionX()
{
    return m_directionX;
}
