#include"GLFW/glfw3.h"

int main()
{

	if (!glfwInit())
	{
		_asm {
			int 3
		};
	}

	return 0;
}