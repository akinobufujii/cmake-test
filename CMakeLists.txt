cmake_minimum_required(VERSION 2.8)
project(cmake-test)
add_executable(${PROJECT_NAME}
	main.cpp
	myLib/TestClass.cpp
)

