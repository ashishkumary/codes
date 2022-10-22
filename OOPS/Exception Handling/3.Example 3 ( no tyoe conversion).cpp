#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
    
	catch (int x) {
		cout << "Caught " << x;
	}
    
	catch (...) {                           //catch all block
		cout << "Default Exception\n";
	}
	return 0;
}


// implicit type conversion doesn’t happen for primitive types. For example, in the following program, ‘a’ is not implicitly converted to int.