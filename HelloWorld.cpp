#include <iostream>
#include <vector>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    vector<string> msg = {"Hello", "C++"};
    int x = 5;
    string commit = "Commit 2";
    int y=3;
    char z = '4';

    myFunc("Hello World!");
    
    return 0;
}