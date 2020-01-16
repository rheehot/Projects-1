#pragma once
#include "snakeActor.h"
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <time.h>
#include <vector>
#include <queue>

constexpr int KEY_EXIT_k = 27;

class start 
{
public:
	start();
	~start();
	void startSnake(start& startBoard, std::queue<int> &key_q);
	void printBoard();
	void setGridSize(short sizeInput);
	void setDifficulty(short diffInput);

private:
	void setBoardDebugger();
	inline void setSnakeDebugger();
	void foodGenerator();			//to be worked on

	int msTimer;
	short xSize,ySize;
	char** grid2D;
	bool food;

	snakeActor snake;
	std::vector<snakeFragment>& snakeFrag = snake.getSnakeFrag();
};