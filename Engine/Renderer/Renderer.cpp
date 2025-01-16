#include "Renderer.h"

namespace st
{
    Renderer::Renderer(Screen& screen) : m_Screen(screen)
    {
    }

    void Renderer::printRenderingBuffer()
    {
        for (st::Point& p : buffer)
        {
            std::cout << p.getSymbol();
        }
    }

    std::vector<st::Point> Renderer::getBuffer()
    {
        return buffer;
    }

    void Renderer::draw(st::Point& point)
    {
        buffer.emplace_back(point); 
    }

    void Renderer::clearBuffer()
    {
        buffer.clear();
    }

    void Renderer::render()
    {
        for (int y = 0; y < m_Screen.getSize().y; y++)
        {
            for (int x = 0; x < m_Screen.getSize().x; x++)
            {   
                if (y == 0 || y == m_Screen.getSize().y - 1 || x == 0 || x == m_Screen.getSize().x - 1)
                {
                    std::cout << m_Screen.getEdgeChar();
                }
                else
                {
                    bool entityDrawn = false;
                    // draw the elements inside of the buffer
                    for (st::Point& p : buffer)
                    {
                        if (p.getPosition().y == y && p.getPosition().x == x)
                        {
                            std::cout << p.getSymbol();
                            entityDrawn = true;
                            break;
                        }
                    }

                    if (!entityDrawn)
                    {
                        std::cout << " ";
                    }
                }
            }
            std::cout << "\n";
        }
    }
}