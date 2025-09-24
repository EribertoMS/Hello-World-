/* September 3, 2025 */

#include <iostream>
#include <string>
using namespace std;

void myFunction();

int main()
{

	myFunction();

	return 0;
}

void myFunction()
{
	string myString;
	cout << "Type \"Hello World!\"" << endl;
	getline(cin,myString);
	cout << "Output: " << myString << endl;
}
