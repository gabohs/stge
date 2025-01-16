#pragma once

#include <conio.h>
#include <unordered_map>

namespace st
{
    class InputHandler
    {
    private:
        static std::unordered_map<char, bool> keyStates;
        static void processInput();
        
    public:
        static bool isKeyPressed(char key);
        
    };
}