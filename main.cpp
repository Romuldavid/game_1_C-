//1. g++ -c main.cpp
//2. g++ main.o -o main-app -lsfml-graphics -lsfml-window -lsfml-system
//3. ./main-app
#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    // Create a video mode object
    VideoMode vm(1920, 1080);

    // Create and open a window for the game
    RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

    return 0;
}