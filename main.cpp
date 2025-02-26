#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    // The below is the constructor
    RenderWindow window(VideoMode({ 640, 400 }), "SFML works!", Style::Default);

    window.setFramerateLimit(60); // This sets the framerate of the window
    CircleShape shape(50.f);
    shape.setFillColor(Color::White);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
                window.close();
        }


        // Update: usually we take keystrokes or updates from the user and draw the updated stuff in the draw section.
        //shape.move(0.3f, 0.f);

        

        // Draw
        window.clear();

        // Draw everything
        window.draw(shape);
        window.display();
    }
}