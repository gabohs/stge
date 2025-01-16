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
    
    const st::Vector2& Point::getPosition() const
    {
        return m_Coords;
    }

    st::Vector2& Point::setPosition()
    {
        return m_Coords;
    }
}
