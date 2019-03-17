#include <SFML\Graphics.hpp>
#include <time.h>

using namespace sf;

//
//const int M = 20;
//const int N = 10;
//
//int field[M][N] = { 0 };
//
//int figures[7][4] = 
//{
//	1,3,5,7,
//	2,4,5,7,
//	3,5,4,6,
//	3,5,4,7,
//	2,3,5,7,
//	3,5,7,6,
//	2,3,4,5,
//
//};


int main() {

	RenderWindow window(VideoMode(320, 480), "The Game!");

	/*Texture t;

	t.loadFromFile("images/tiles.png");

	Sprite s(t);

	s.setTextureRect(IntRect(0, 0, 18, 18));*/


	while (window.isOpen())
	{
		//handle events
		Event e;


		//update
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
			{
				window.close();
			}
		}

		window.clear(Color::White);
		//draw objects
		//window.draw(s);
		window.display();
	}



	return 0;

}