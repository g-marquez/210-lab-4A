//*****************************************************************************
// COMSC-210 | Lab 4A | Gabriel Marquez
// Description: this program create and store a vector of structs.
//*****************************************************************************

#include <iostream>
#include <vector>
using namespace std;

struct Color
{
    int red_val;
    int blue_val;
    int green_val;
};

int main()
{
    //declare and initialize example Color object with values
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
    
    return 0;
}