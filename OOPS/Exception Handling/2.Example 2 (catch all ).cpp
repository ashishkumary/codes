// There is a special catch block called the ‘catch all’ block,
// written as catch(…), that can be used to catch all types of exceptions.

#include <iostream>
using namespace std;

int main()
{
	try {
	throw 10;
	}
    
  catch(double b){
    cout << "Caught double ";
  }
    
	catch (char *excp) {
		cout << "Caught " << excp;
	}
    
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
//int is thrown as an exception, but there is no catch block for int, so the catch(…) 
//block will be executed. 