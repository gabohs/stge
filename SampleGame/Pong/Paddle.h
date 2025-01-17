#pragma once

#include "../../Engine/stge.h"

class Paddle
{
private:
    std::vector<st::Point> m_shape{};

    enum Direction
    {
        LEFT, 
        RIGHT,
        NONE
    };
    Direction direction;

public:
    Paddle(st::Vector2 initialPos);

    std::vector<st::Point>& getPaddle();
    void move();

    int getPaddleLeft();
    Direction getDir();

};