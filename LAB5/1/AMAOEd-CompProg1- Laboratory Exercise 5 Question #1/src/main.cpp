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

int integer;

cout << "Enter an integer: ";
cin >> integer;

if (integer==0)
{
    cout << "Hello World";
}
else if (integer==1) {
    cout << "I am Groot";
} 
else if (integer==2) {
    cout << "To the Top";
}
else if (integer==3) {
    cout << "Where is the horizon";
}
else if (integer==4) {
    cout << "I do not know";
}
else {
    cout << "Yeah, I will.";
}

    // ********************  DO NOT CHANGE ***********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

    cout << endl;
    system ("PAUSE");
    return EXIT_SUCCESS;
}
