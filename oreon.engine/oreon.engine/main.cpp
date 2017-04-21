#include <iostream>
#include <engine\Game.h>

const GLint WIDTH = 800, HEIGHT = 600;

int main() {

	//glfwInit();

	//glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	//glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	//glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	//GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "test", nullptr, NULL);

	//if (nullptr == window) {
		//std::cout << "Failed to create GLFW window" << std::endl;
		//glfwTerminate();
		//return EXIT_FAILURE;
	//}

	//glfwMakeContextCurrent(window);

	//glewExperimental = GL_TRUE;

	//if (GLEW_OK != glewInit()) {
		//std::cout << "Failed to initialize GLEW" << std::endl;

		//return EXIT_FAILURE;
	//}

	//int screenWidth, screenHeight;
	//glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

	//glViewport(0, 0, screenWidth, screenHeight);

	//while (!glfwWindowShouldClose(window))
	//{
		//glfwPollEvents();

		//glClearColor(0.1, 0.1, 0.1, 1);
		//glClear(GL_COLOR_BUFFER_BIT);
		//glfwSwapBuffers(window);
	//}

	//glfwTerminate;

	//return EXIT_SUCCESS;

	Game test = Game();
	test.getEngine().createWindow(400, 400, "test");
	test.launch();
}