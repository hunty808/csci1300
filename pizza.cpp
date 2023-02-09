#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //pizza cost based on size and toppings//
    double S, M, L , Stoppings, Mtoppings, Ltoppings, price;
    int toppings;
    char size;
    S = 4.99;
    M = 5.99;
    L = 6.99;
    Stoppings = 0.75;
    Mtoppings = 1.50;
    Ltoppings = 2.25;

    cout << "What size pizza would you like to order?" << endl;
    cin >> size;
    if (size != 'S' && size != 'M' && size != 'L') 
{
    cout << "Please enter a valid input." << endl;
    return 0;
}
    cout << "How many toppings do you want?" << endl;
    cin >> toppings;
    if(toppings <0)
{
  cout << "Please enter a valid input." << endl;
return 0;
}   else if(size == 'S')
{
    price = S + (toppings * Stoppings);
    cout << "Your total is $" << price << endl;
}   else if(size == 'M')
{
    price = M + (toppings * Mtoppings);
    cout << "Your total is $" << price << endl;
}   else if(size == 'L')
{
    price = L + (toppings * Ltoppings);
    cout << "Your total is $" << price << endl;
}  
return 0;
}    
