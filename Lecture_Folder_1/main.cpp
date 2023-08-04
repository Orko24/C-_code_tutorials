// Your First C++ Program

#include <iostream>

using namespace std;


int addNumbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}


// int main()
// {
//     cout << "Hello World!" << endl;
//     return 0;
// }

// int main(int argc, char **argv) 
int main()
{
    int first_number = 12;
    int second_number = 9;

    int sum;

    sum = addNumbers( first_number, second_number);

    cout << "The sum of the first 2 numbers are: " << sum << endl;
    cout << "The sum of the first 2 numbers are: " << addNumbers(23, 8) << endl;

    return 0;
}