#include <iostream>
#include <vector>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    vector<string> msg = {"Hello", "C++"};

    myFunc("Hello, World!");

    myFunc("Ciao, World!");

    return 0;
}