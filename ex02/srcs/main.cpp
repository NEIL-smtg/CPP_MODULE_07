#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 20 + 1;
        numbers[i] = value;
        mirror[i] = value;
    }
    numbers.printArr();
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        
        tmp.printArr();
        test.printArr();
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << "Testing -2 index" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Testing MAX_VAL index" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Randomizing" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 20 + 1;
    }
    numbers.printArr();
    delete [] mirror;//
    return 0;
}