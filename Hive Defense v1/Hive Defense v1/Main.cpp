// SFML Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Tutorial");

	while (window.isOpen())
	{
		window.clear();
		window.display();
	}
}
