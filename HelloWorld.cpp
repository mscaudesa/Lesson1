#include <iostream>
#include <string>
using namespace std;

void myFunc(string myMsg){
    cout << myMsg << endl;
}

int main(){
    myFunc("\101");
    long double ld = 1;
    
    return 0;
}