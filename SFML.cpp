#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1600, 1200), "First Graphics Application");

    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        for (int i = 0; i < 10; i++)
        {   srand(time(0));
            int x = rand() % 800;
            int y = rand() % 600;

            CircleShape circle(100);
            circle.setFillColor(Color::Red);
            circle.setPosition(x, y);

            window.draw(circle);
            sleep(seconds(0.05));
        }

        window.display();
    }

    return 0;
}