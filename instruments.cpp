#include <iostream>
using namespace std;

int main()
{
    // DO NOT include the above statements in your answer here
// only paste in your main() function

int category, instrument, price;
cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion" << endl;
cin >> category;

            //Brass//

    switch (category)
    {
    case (1):
        cout << "Select an instrument: (1)Trumpet (2)Trombone" << endl;
            cin >> instrument;
                switch (instrument)
                {
                case 1:
                    cout << "Your instrument will be $350." << endl;
                break;
                case 2: 
                    cout << "Your instrument will be $400." << endl;
                break;
                default:
                    cout << "Please enter a valid input." << endl;
                }
            break;

            //woodwind//

    case (2):
        cout << "Select an instrument: (1)Flute (2)Saxophone" << endl;
            cin >> instrument;
                switch (instrument)
                {
                case 1:
                    cout << "Your instrument will be $325." << endl;
                break;
                case 2: 
                    cout << "Your instrument will be $425." << endl;
                break;
                default:
                    cout << "Please enter a valid input." << endl;
                }
            break;

            //Percussion//

    case (3):
        cout << "Select an instrument: (1)Snare Drum (2)Cymbals" << endl;
            cin >> instrument;
                switch (instrument)
                {
                case 1:
                    cout << "Your instrument will be $275." << endl;
                break;
                case 2: 
                    cout << "Your instrument will be $200." << endl;
                break;
                default:
                    cout << "Please enter a valid input." << endl;
                }
            break;
    default:
        cout << "Please enter a valid input." << endl;
    }
return 0;
}
