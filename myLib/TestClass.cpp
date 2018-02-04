#include "TestClass.h"
#include <iostream>

Test::Test()
{
	std::cout << "Test::Test()" << std::endl;
}

Test::~Test()
{
	std::cout << "Test::~Test()" << std::endl;
}

void Test::echo(const std::string& str)
{
	std::cout << str << std::endl;
}
