//Created by: Victoria Le
//Created on: Sept 26, 2016
//Created for: ICS3U
//This program is the object drop program for assignement 2 

#include <iostream>

using namespace std;

int main()
{
    const double gravity = 9.81;
    double seconds;
    double height;
    
    cout << "An object fel from a 100m cliff. Enter the number of seconds after the object fell to determine the height of the object.\n";
    cout << "Please insert time in seconds: ";
    cin >> seconds;
    
    height = 100 - 0.5 * gravity * seconds * seconds;
    
    cout << "The height of the object above the ground is: " << height << " m\n";
   
   return 0;
}