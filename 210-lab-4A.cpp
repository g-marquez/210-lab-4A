//*****************************************************************************
// COMSC-210 | Lab 4A | Gabriel Marquez
// Description: this program creates and stores a vector of structs.
//*****************************************************************************

#include <iostream>
#include <vector>
#include <random>
#include <iomanip>
using namespace std;

const int RAND_MAXIMUM = 50;
const int RAND_MINIMUM = 25;
const int ARBITRARY_MOD = 250; //limit for rand color values
const int SET_WIDTH = 10;

struct Color
{
    int red_val;
    int blue_val;
    int green_val;
};

int main()
{
    //setting seed value for rand()
    srand(time(0));
    
    //declare and initialize example Color object with arbitrary values
    Color example;
    example.red_val = 12;
    example.blue_val = 23;
    example.green_val = 83;

    //output example color struct
    cout << "Example color struct:" << endl;
    cout << "---------------------" << endl;
    cout << "Red Value: " << example.red_val << endl;
    cout << "Blue Value: " << example.blue_val << endl;
    cout << "Green Value: " << example.green_val << endl;

    //create an empty <Color> vector
    vector<Color> colorVec;
    colorVec.push_back(example);

    //output colorVec to console
    cout << "\nOutputting colorVec:\n";
    for ( int i = 0; i < colorVec.size(); ++i)
    {
        cout << "Color #" << i+1 << endl;
        cout << colorVec[i].red_val << " " << colorVec[i].blue_val << " "
             << colorVec[i].green_val << endl << endl;
    }

    //clearing colorVec for next Milestone
    colorVec.clear();

    //RNG between 25 and 50 for number n of elements in colorVec
    //thank you, review video!
    int n = rand() % (RAND_MAXIMUM - RAND_MINIMUM + 1) + RAND_MINIMUM;

    //push_back n colors into colorVec
    for (int i = 0; i < n; ++i)
    {
        Color temp;
        temp.red_val = rand() % ARBITRARY_MOD;
        temp.blue_val = rand() % ARBITRARY_MOD;
        temp.green_val = rand() % ARBITRARY_MOD;
        colorVec.push_back(temp);
    }

    //output colorVec with n elements
    cout << "Outputting colorVec with " << n << " elements:" << endl;
    for ( int i = 0; i < colorVec.size(); ++i)
    {
        cout << setw(SET_WIDTH);
        cout << "\tColor #" << "R value" << "B value" << "G value" << endl;
        cout << setw(SET_WIDTH);
        cout << "\t------" << " " << "------" << "\t" << "------" << "\t" << "------" << endl;
        cout << setw(SET_WIDTH);
        cout << "\t" <<  i + 1 << " " << colorVec[i].red_val << " " << colorVec[i].blue_val 
             << " " << colorVec[i].green_val << endl << endl;
    }

    return 0;
}