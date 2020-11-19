#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "number of main args: " << argc << endl;
	cout << "argv[0]" << argv[0] << endl;
	cout << "argv[1]" << argv[1] << endl;
	cout << "argv[2]" << argv[2] << endl;
//	cout << "argv[3]" << argv[3] << endl;

	cout << string(20, '-') << endl;
 
	cout << sizeof (argv) << endl;

}
