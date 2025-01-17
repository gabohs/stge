#pragma once
#include "../../Engine/stge.h"
#include "Paddle.h"


class Ball
{
private:
    st::Point m_point;

    int m_speed;
    int m_directionY;
    int m_directionX;

public:
    Ball(st::Vector2 initialPos);

    void handleCollisions(Paddle pad);
    void update();

    st::Point& getBall();
    
    int getDirectionY();
    int getDirectionX();

};