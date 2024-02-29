#include <iostream>
using namespace std;

int main()
{
  // header project
  cout << "****************************************\n";
  cout << "***** welcome to my age calculator *****\n";
  cout << "****************************************\n";

  int yourAge;
  cin >> yourAge;
  cout << yourAge;

  int age_days = yourAge * 365;
  int age_hours = yourAge * age_days * 365;

  cout << "age_days is: " << age_days << "days\n";
  cout << "age_hours is: " << age_hours << "days\n";

  return 0;
}