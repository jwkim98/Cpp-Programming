#include <ExampleClass.hpp>

#include <iostream>
using namespace CppStudy;

Example& ReturnByReference()
{
    Example example = Example();
    auto* examplePtr = new Example();
    return *examplePtr;
}

Example ReturnByObject()
{
    Example example = Example();
    return example;
}


int main(int argc, char** argv)
{
    std::cout << "Hello, World!" << std::endl;
    int* ptr = new int[5];
    Example example = ReturnByObject();

    /*
    Example* example = new Example();

    std::cout<< "Lets destruct it!" <<std::endl;

    delete example;
    delete[] ptr;
     */

	while (true);
    return 0;
}