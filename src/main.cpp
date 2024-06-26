#include"Window.h"

int main()
{
	Window window("Test", 1280, 720);

	while (!glfwWindowShouldClose(window.getGLFWindow()))
	{
		glfwPollEvents();
		glfwSwapBuffers(window.getGLFWindow());
	}

	return 0;
}