// Escape Sequences Characters
/*
  Escape Sequences Characters
  --- Special Non Printing Characters
  --- Control Printing Behaviour
  --- Start With Back Slash "\"
  --- Can Be Inserted In Any Position
  - \n
  - \\
  - \"
  - \'
  - \t => Tab Equal 8 Spaces
  - \b
  - \a => Alert => Play Beep During Execution
  - \r => Carriage Return
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "hello, world!\n";
	cout << "hello, world!\\\n"; // make Escape after Character
	cout << "hello, \"ashraf\"\n"; // make Escape after Character
	cout << "hello, 'ashraf'\n";
	cout << "hello,\t'ashraf'\n"; // make tap indentation
	cout << "hello,\b'ashraf'\n"; // make bacl space
	cout << "hello,\r'ashraf'\n"; // Carriage Return

	return 0;
}