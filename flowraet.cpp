#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //safeness of the creek based on water flow speed//
    int creek_flowrate;
    cout <<"What is the flowrate of Boulder Creek?" << endl;
    cin >> creek_flowrate;

   if(creek_flowrate <= 0)
{
    cout <<"Please enter a valid input." << endl;
    return 0;
}
    if(creek_flowrate > 0 && creek_flowrate <= 250)
{
    cout << "It is safe to go tubing. Have fun!" << endl;

} else 
{
    cout << "The river is flowing too fast to go tubing." << endl;
}
return 0;

}
