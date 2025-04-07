#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>


int main()
{
    // initialize a new window and cap the fps to 60
    sf::Window window = sf::RenderWindow(sf::VideoMode({1000u, 600u}), "SFMLSampleGame");
    window.setFramerateLimit(60);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        // clear contents of the window here
        // window.clear(sf::Color::Black);

        // draw the current frame
        
        // try to draw a triangle with OpenGL
        float vertices[] = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f
        };

        // end the current frame
        window.display();
    }
}
