// test_filesystem.cpp : Defines the entry point for the application.
//

#include "test_filesystem.h"

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
	int i = 0;
	fs::path path{ "../" };
	std::cout << "Hello CMake." << std::endl;
	return 0;
}
