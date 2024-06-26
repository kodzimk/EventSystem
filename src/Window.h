#pragma once
#include<string>
#include"GLFW/glfw3.h"

class Window final
{
private:
	std::string name;
	int width, height;
	GLFWwindow* window = nullptr;
public:
	Window() = default;
	Window(std::string name, int width, int height);

public:
	~Window();
	void init(std::string name, int width, int height);
	inline GLFWwindow* getGLFWindow() const { return window; };
	inline std::string getName() const { return name; };
private:
	static void keyCallback(GLFWwindow* window, int button, int scancode, int action, int mods);
	static void mouseButtonCallBack(GLFWwindow* window, int button, int action, int mode);
	static void mousePosCallBack(GLFWwindow* window, double xpos, double ypos);
	static void windowResizeCallBack(GLFWwindow* windw, int width, int height);
};