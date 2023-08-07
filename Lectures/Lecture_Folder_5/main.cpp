#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    int max;
    int max_terr;
    int a = 35;
    int b = 20;

    // int max{};

    // int a{35};
    // int b{200};

    cout << endl;
    cout << "using regular if " << endl;

    
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    

    max_terr = (a > b) ? a : b; // Ternary operator

    cout << "max : " << max << endl;
    cout << "max_terr: " << max_terr << endl; 

    return 0;
}

