#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

typedef string Type;
Type initVal()
{
	cout << "::initval()" << endl;
	return "::initval() retVal";
}

class Exercise
{
	public:
		typedef double Type;
		Type setVal(Type parm);
// 		{
//			val = parm + initVal();
//			return val;
//		}
		Type initVal();
	private:
		int val;
};


Exercise::Type Exercise::setVal(Type parm)
{
	val = parm + initVal();
	return val;
}

Exercise::Type Exercise::initVal()
{
	cout << "Exercise::initVal()" << endl;
	return 3.14;
}

int main()
{
	Exercise exer;
	cout << exer.setVal(1) << endl;

	return 0;
}
