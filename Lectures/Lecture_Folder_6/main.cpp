#include <iostream>

int main()
{


    const size_t COUNT{100};

    for (size_t i{0}; i < COUNT + 1; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    return 0;
}