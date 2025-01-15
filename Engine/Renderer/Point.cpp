#include "Point.h"

namespace st
{
    Point::Point(char Char, st::Vector2 initialPos) // : m_Char(Char), m_Coords(initialPos)
    {
        m_Char = Char;
        m_Coords = initialPos;
    }

    char Point::getSymbol()
    {
        return m_Char;
    }
    
    st::Vector2 Point::getPosition()
    {
        return m_Coords;
    }

    void Point::setPosition(st::Vector2 newCoords)
    {
        m_Coords = newCoords;
    }
}
