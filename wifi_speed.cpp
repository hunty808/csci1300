#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //wifi speed base off of three user inputs//
    double wifi1, wifi2, wifi3;

    cout <<"Enter wifi speeds over the last 3 classes:" << endl;
    cin >> wifi1;
    cin >> wifi2;
    cin >> wifi3;

    if(wifi1 < 0 || wifi2 < 0 || wifi3 < 0)
    {
        cout << "Please enter a valid input." << endl;
        return 0;
    }

    if(wifi1 < wifi2 && wifi2 < wifi3)
    {
        cout << "The wifi is getting faster!" << endl;
    }
    if (wifi1 > wifi2 && wifi2 > wifi3)
    {
        cout << "The wifi is getting slower!" << endl;
    }
    if ((wifi1 >= wifi2 && wifi2 <= wifi3) || (wifi1 <= wifi2 && wifi2 >= wifi3))
    {
        cout << "The wifi speed is changing unpredictably." << endl;
    }
return 0;
}
