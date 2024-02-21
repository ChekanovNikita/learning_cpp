#include <iostream>

int main()
{
    std::string p[] = {
        "C++ is a general-purpose programming language with a bias towards systems programming that",
        "  - is a better C",
        "  - supports data abstraction",
        "  - supports object-oriented programming",
        "  - supports generic programming."
    };

    for(short i = 0; i < 5; i++)
    {
        std::cout << p[i] << "\n";
    }
}
