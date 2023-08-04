#include <iostream>
#include <string>

using namespace std;

int main(){


    string full_name;
    int age3;
    cout << "Please type in your full name and age " << endl;
    cout << "Please enter your full name here:"; getline(cin,full_name); cout << endl;
    cout << "Please enter your age here: "; cin >> age3; cout << endl;
    cout << "Hello " << full_name << " you are " << age3 << " years old!" << endl;
 
  return 0;
}