#include <iostream>
#include <vector>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    vector<string> msg = {"Hello", "C++"};
    int x = 100, y=1;
    int w = 3;
    char z = 't';

    myFunc("Hello World!");
    
    return 0;
}