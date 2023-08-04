#include <iostream>

using namespace std;

template <typename T>

T add(T a, T b){
    return a + b;
}

int main(){

    int a = 10;
    int b = 20;

    auto result_b = add(a,b);
    cout << "result_b: " << result_b << endl;

    return 0;
};