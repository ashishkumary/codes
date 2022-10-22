// If an exception is thrown and not caught anywhere, the program terminates abnormally. For example, in the following program, a char is thrown, but there is no catch block to catch the char

#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}

	catch (int x) {
		cout << "Caught ";
	}
  
	return 0;
}


/* OUTPUT
  
terminate called after throwing an instance of 'char'

This application has requested the Runtime to terminate it in an 
unusual way. Please contact the application's support team for 
more information

*/
