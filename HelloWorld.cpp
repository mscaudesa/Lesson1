#include <iostream>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    myFunc("Hello, World!");
    myFunc("World!");
    

    return 0;
}