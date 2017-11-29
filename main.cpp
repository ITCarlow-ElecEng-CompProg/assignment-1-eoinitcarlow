/*Eoin Finlay
  Ex1-Temp Conversion
  20 Sep 2017*/

//Preproceesor directives
#include <iostream>

using namespace std;


//Main Function
int main()
{
    //Variable Declarations
    float Tf, Tc;

    //Prompting user to enter a value
    cout << "Enter the temperature in Degrees Celsius: ";
    //Input value been stored as Tc
    cin >> Tc;

    //Assigning Tf to an equation
    Tf = ((9.0/5.0)*Tc)+32;

    //Displaying conversion to user
    cout<<"Temperature in Fahrenheit: " << Tf << endl;

    return 0;
}
