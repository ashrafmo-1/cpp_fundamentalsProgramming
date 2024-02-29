#include <iostream>
using namespace std;

int magala = 2;

int second()
{
    magala = 20;
    int price = 100;
    cout << magala << " from second function" << "price is: " << price << "\n";
    return 0;
}
int main() {
    cout << magala << " from main function\n";
    second();
    return 0;
}