#include <SFML/Graphics.hpp>
#include <vector>
#include "settings.h"
#include "Player.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
    window.setFramerateLimit(FPS);

    std::vector<Player*> v1;
    v1.reserve(1);
    Player* o = new Player;
    v1.push_back(o);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        v1.at(1)->update();

       
        window.clear();
        window.draw(v1.at(1)->getSprite());
        window.display();
    }

    return 0;
}