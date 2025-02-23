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
    string commit = "Commit 1";

    myFunc("Hello World!");
    
    return 0;
}