#pragma once

#include "../Screen/Screen.h"
#include "Point.h"

#include <vector>
#include <iostream>

namespace st
{
    class Renderer
    {
    private:
        Screen m_Screen;
        std::vector<st::Point> buffer{};

    public:
        Renderer(Screen& screen);

        void printRenderingBuffer();

        std::vector<st::Point> getBuffer();

        void draw(st::Point& point);
        void draw(std::vector<st::Point>& points);

        void clearBuffer();

        void render();

    };
} 
