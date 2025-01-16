#include "InputHandler.h"
#include <stdio.h>

namespace st
{   
    std::unordered_map<char, bool> InputHandler::keyStates;

    void InputHandler::processInput()
    {
        while (_kbhit())
        {
            char key = _getch();
            keyStates[key] = true;
        }
    }

    bool InputHandler::isKeyPressed(char key)
    {
        processInput();
        if (keyStates[key])
        {
            keyStates[key] = false;
            return true;
        }
        return false;
    }
}