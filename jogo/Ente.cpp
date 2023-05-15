#include "Ente.h"
Ente::Ente()
{
    id = 092;
}
Ente::~Ente()
{
}
void Ente::print()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    window.draw(shape);
}
