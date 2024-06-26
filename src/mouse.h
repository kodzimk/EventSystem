#pragma once
#include<string>

class MouseButton
{
public:
	int key;
	std::string mode;

public:
	MouseButton(int key, int mode)
	{
		this->key = key;
		switch (mode)
		{
		case 0: this->mode = "GLFW_RELEASED"; break;
		case 1: this->mode = "GLFW_PRESSED"; break;
		case 2: this->mode = "GLFW_REPEATED"; break;
		}
	}

	std::string result()
	{
		std::string res = "Mouse Key " + mode + " " + "Button: " + std::to_string(key);
		return res;
	}
};

class MousePos
{
public:
	double x, y;

public:
	MousePos(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	std::string result()
	{
		std::string res = "Mouse Pos:  X:" + std::to_string(x) + " Y:" + std::to_string(y);
		return res;
	}
};