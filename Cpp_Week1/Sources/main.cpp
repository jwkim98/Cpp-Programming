#include <ExampleClass.hpp>
#include <iostream>
#include <stdio.h>
#include <vector>


using namespace CppStudy;

/**
 *
 * @return : pointer to Example (On the heap)
 */
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
    auto a = 3;
    auto& a_ref = a;

    auto b = 1.1f;
    auto c = static_cast<double>(b);

    /**
     * Input and Output methods of C++
     * using std::cin and std::cout
     */

    int input1, input2;
    float input3;

    /// Can take different types of inputs
    std::cin>>input1>>input2>>input3;

    std::cout << "Hello, World! input: "<<input1<<" "<<input2<<" "<<input3<<std::endl;

    std::vector<int> vect{1,2,3,4,5};


    /**
     * Iterative for in C++
     * 3- ways of iterating through iterable data containers
     */

    ///using Modern C++ ranged-based for
    for(auto num : vect)
    {
        std::cout<<num<<std::endl;
        num++;
    }

    std::cout<<std::endl;

    /// for loop using iterators
    for(std::vector<int>::iterator itr = vect.begin(); itr != vect.end(); itr++)
    {
        std::cout<<*itr<<std::endl;
        *itr++;
    }

    std::cout<<std::endl;

    /// using C style traditional way
    for(int i = 0; i < vect.size(); i++)
    {
        std::cout<<vect.at(i)<<std::endl;    Example example = Example();

    }

    /**
     * Different ways to define classes
     */

    /// Defining on the stack
    Example example = Example();

    /// Defining on the Heap (Not recommended)
    Example* examplePtr = new Example();

    std::cout<< "Lets destruct it!" <<std::endl;

    /// Free the Example object on the heap
    delete examplePtr;

    /// UnComment this line for preventing the program to terminate immediately
	//while (true);
    return 0;
}