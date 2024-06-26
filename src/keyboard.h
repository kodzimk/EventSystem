#pragma once
#include<iostream>

class keyboard
{
private:
	int key;
	std::string mode;
public:
	keyboard(int key, int mode)
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
		std::string res =  "Key " + this->mode + " " + "Pressed: " + (char)key;
		return res;
	}
};

