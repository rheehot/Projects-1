#pragma once
#include <vector>
#include <queue>
#include "constSource.h"

#include <iostream>

struct coordinates {
	short x;
	short y;

};

enum snakeState {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

class snakeActor
{
public:
	snakeActor();
	void setInitPos(const int gridX, const int gridY);
	void nextPos();
	void setSnakeDirection(int* key);
	snakeState getSnakeDirection();
	std::vector<coordinates>& getSnakeFrag();
	void snakeEat();
	void printCoord();			//debugger
private:
	coordinates newSnakeFrag;
	bool eating;
	snakeState snakeS;
	std::vector<coordinates> snake;
};