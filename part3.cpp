#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double taxRate = 0.075;
    double price;
    double salesTax;
    double totalCost;
    cout << "Enter price for your item: ";
    cin >> price;
    salesTax = price * taxRate;
    totalCost = price + salesTax;
    cout << fixed << setprecision(2);
    cout << "Original Price: " << price << endl;
    cout << "Sales Tax: " << salesTax << endl;
    cout << "Total Cost: " << totalCost << endl;

}