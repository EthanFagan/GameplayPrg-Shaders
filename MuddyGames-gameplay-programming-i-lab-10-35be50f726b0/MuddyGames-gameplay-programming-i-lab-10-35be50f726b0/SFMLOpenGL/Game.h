#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <fstream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <MyVector3.h>
#include <MyMatrix3.h>

using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	std::string load_file(const std::string &src);
	void Game::matrixApplicationFunction(MyMatrix3 t_matrix);

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};

#endif