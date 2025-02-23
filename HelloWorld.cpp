#include <iostream>
#include <vector>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    vector<string> msg = {"Hello", "C++"};
    int x = 10;

    myFunc("Hello World!");
    myFunc("How are you?");
    
    return 0;
}