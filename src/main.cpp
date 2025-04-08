#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>


int main()
{
    // initialize a new window and cap the fps to 60
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1000u, 600u}), "SFML/OpenGL Game");
    window.setFramerateLimit(60);

    // activate the window. windows in SFML come with a built in OpenGL context, so calling
    // window.setActive(true) enables the OpenGL context, allowing you to call OpenGL functions
    window.setActive(true);

    // run the program as long as the window is open
    bool running = true;
    while (running)
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                // terminate the program if the window is closed
                running = false;
            }
            else if (const sf::Event::Resized* resized = event->getIf<sf::Event::Resized>())
            {
                // adjust the viewport when the window is resized
                glViewport(0, 0, resized->size.x, resized->size.y);
            }
        }

        // clear window
        window.clear(sf::Color::Black);

        // draw the current frame
        sf::CircleShape shape(50.f);
        shape.setFillColor(sf::Color(100, 250, 50));
        window.draw(shape);

        // put renderings to the screen and end frame
        window.display();
    }

    // release resources
}
