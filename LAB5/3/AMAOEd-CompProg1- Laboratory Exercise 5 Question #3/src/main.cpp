/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
float a, b;

cout << "Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;

if (b == 0) {
    if (a == 0) {
        cout << "0/0 is undefined!";
    } else {
        cout << "Any number divided by zero is undefined.";
    }
} else {
    cout << "The quotient is " << a/b << ".";
}

    // ********************  DO NOT CHANGE ***********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

    cout << endl;
    system ("PAUSE");
    return EXIT_SUCCESS;
}
