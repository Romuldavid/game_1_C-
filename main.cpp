//1. g++ -c main.cpp
//2. g++ main.o -o main-app -lsfml-graphics -lsfml-window -lsfml-system
//3. ./main-app
#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    // Create a video mode object
    //VideoMode vm(1920, 1080);
    VideoMode vm(640, 480);

    // Create and open a window for the game
    //RenderWindow window(vm, "Timber!!!", Style::Fullscreen);
    RenderWindow window(vm, "Timber!!!");

    while(window.isOpen())
    {
        //Handle the players input
        Event event;
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
                window.close();
        }

        /*
        ****************************************
        Update the scene
        ****************************************
        */      

       /*
        ****************************************
        Draw the scene
        ****************************************
        */

       //Clear everything from the last frame
       window.clear();

       //Draw our game scene here

       //
       //Show everything we just drew
       window.display();
    }

    return 0;
}