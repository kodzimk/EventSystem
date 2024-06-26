#include "Window.h"
#include"keyboard.h"
#include"mouse.h"

Window::Window(std::string name, int width, int height)
{
	init(name, width, height);
}

Window::~Window()
{
}

void Window::init(std::string name, int width, int height)
{
	this->name = name;
	this->width = width;
	this->height = height;

	if (!glfwInit())
	{
		_asm {
			int 3
		};
	}

	window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);

	if (!window)
	{
		_asm {
			int 3
		};
	}

	glfwMakeContextCurrent(window);
	glfwSetWindowUserPointer(window, this);
	glfwSetKeyCallback(window, keyCallback);
	glfwSetMouseButtonCallback(window, mouseButtonCallBack);
	glfwSetCursorPosCallback(window, mousePosCallBack);
	glfwSetWindowSizeCallback(window, windowResizeCallBack);
}

void Window::keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	keyboard k(key, action);
	std::cout << k.result() << std::endl;
}

void Window::mouseButtonCallBack(GLFWwindow* window, int button, int action, int mode)
{
	MouseButton mb(button, action);
	std::cout << mb.result() << std::endl;
}

void Window::mousePosCallBack(GLFWwindow* window, double xpos, double ypos)
{
	MousePos mp(xpos, ypos);
	std::cout << mp.result() << std::endl;
}

void Window::windowResizeCallBack(GLFWwindow* window, int width, int height)
{
	std::cout << "Window Size: " + std::to_string(width) + " Height:" + std::to_string(height) << std::endl;
}
