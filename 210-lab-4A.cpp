//*****************************************************************************
// COMSC-210 | Lab 4A | Gabriel Marquez
// Description: this program creates and stores a vector of structs.
//*****************************************************************************

#include <iostream>
#include <vector>
#include <random>
#include <iomanip>
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

    //RNG between 25 and 50 (following online example, pending any response on
    // Module 2 discussion board)
    random_device rd; //seed source for random number engine using <random>
    mt19937 gen(rd()); //mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(25, 50);
    int n = distrib(gen); //a random number n between 25 and 50
    uniform_int_distribution<> rand_int(1, 1000); //arbitrary range selected
    int random_color_val = rand_int(gen); //random number for filling color member values

    //push_back n colors into colorVec
    for (int i = 0; i < n; ++i)
    {
        Color temp;
        temp.red_val = random_color_val;
        temp.blue_val = random_color_val;
        temp.green_val = random_color_val;
        colorVec.push_back(temp);
    }

    //output colorVec with n elements
    cout << "Outputting colorVec with " << n << " elements:" << endl;
    for ( int i = 0; i < colorVec.size(); ++i)
    {
        cout << "Color #" << i+1 << endl;
        cout << colorVec[i].red_val << " " << colorVec[i].blue_val << " "
             << colorVec[i].green_val << endl << endl;
    }

    //stopping work for now

    return 0;
}