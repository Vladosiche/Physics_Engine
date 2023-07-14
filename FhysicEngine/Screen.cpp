#include "Screen.h"
#include <SFML/Graphics.hpp>
void Global_window::init_Screen(int x, int y)
{
	sf::RenderWindow window(sf::VideoMode(x,y), "Engine");
	window.clear();
	window.display();
}