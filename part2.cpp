#include <iostream>
using namespace std;

int main(){
    int favInt;
    cout << "Please favorite number: ";
    cin >> favInt;
    int magicNum = ((favInt *2) + 10)/ 2 - favInt;
    cout <<" Your magic number is.. " << magicNum << "!" <<endl;
    
}