#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //transporation type and if they can afford it based on their budget
    double budget, A, B, T;
    char transportation;
    B = 175.25;
    T = 240.66;
    A = 350.93;
    cout << "What is your budget?" << endl;
    cin >> budget;
    if(budget <0)
{
    cout << "Please enter a valid input." << endl;
    return 0;
}
    cout << "What mode of transportation would you like to take (B, T, or A)?" << endl;
    cin >> transportation;
  if (transportation == 'B') {
  if (budget >= B) {
    cout << "Yes, this vacation is within your budget!" << endl;
  } else {
    cout << "Sorry, this vacation is outside your budget." << endl;
  }
} else if (transportation == 'T') {
  if (budget >= T) {
    cout << "Yes, this vacation is within your budget!" << endl;
  } else {
    cout << "Sorry, this vacation is outside your budget." << endl;
  }
} else if (transportation == 'A') {
  if (budget >= A) {
    cout << "Yes, this vacation is within your budget!" << endl;
  } else {
    cout << "Sorry, this vacation is outside your budget." << endl;
  }
} else {
  cout << "Please enter a valid input." << endl;
}
return 0;
}
