// variable bast Practices
/*
    1. Use descriptive variable names
    2. dont re declere any varibale by past name
    3. name variable dont start by number
    4. can use english numbers and underScore and you cant use special characters
    5. reserved words are not allowed to be used as variable names "1. public; 2. class; "
*/

/* must make search for => "best practices for variable names" */

#include <iostream>

int main(){
    using namespace std; // to not retype std::

    cout <<  "\n//* example one */\n";
    // variable declar
    int heght = 190;
    cout << "you heght is " << heght << "cm.\n";
    cout << "before 3 monthes plus 3cm , your heght now is: " << heght + 3;

    cout <<  "\n//* example two */\n";
    int x = 1;
    cout << x;

    cout <<  "\n//* example three */\n";
    int y, z, w;
    y = 10;
    z = 20;
    w = 30;
    cout << y + z + w;
    cout <<  "\n//* example four */\n";
        int a, b, c;
    a = 10, b = 20, c = 30;
    cout << a + b + c;
    cout <<  "\n//* example five */\n";
    int g, t, r;
    g = t = r = 20;
    cout << g;
}