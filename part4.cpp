#include <iostream>
using namespace std;

int main(){
    int pplComing;
    int slicesPerPizza;
    int slicesPerPerson;
    cout << "How many people are attending the party? ";
    cin >> pplComing;
    cout << "Number of Slices per Pizza: ";
    cin >> slicesPerPizza;
    cout << "Number of Slices each person is expected to eat: ";
    cin >> slicesPerPerson;
    int totalSlices = slicesPerPerson * pplComing;
    int wholePizzas = totalSlices / slicesPerPizza;
    int leftoverSlices = totalSlices % slicesPerPizza;
    cout << "You'll need to order " << wholePizzas << " pizzas." << endl;
    cout << "There will be " << leftoverSlices << " leftover slices." <<endl;
    
}