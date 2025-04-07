#include <SFML/Graphics.hpp>

int main()
{
    // initialize a new window and cap the fps to 60
    sf::Window window = sf::RenderWindow(sf::VideoMode({1000u, 600u}), "SFMLSampleGame");
    window.setFramerateLimit(60);

    //
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.display();
    }
}
