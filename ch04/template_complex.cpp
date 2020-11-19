#include <iostream>
using namespace std;

template<typename T>
class Complex
{
	public:
		Complex(): re(0), im(0) {}
		Complex(T re, T im): re(re), im(im) {}
		T getRe();
		T getIm();
	private:
		T re, im;
};

template<typename T>
T Complex<T>::getRe()
{
	return re;
}

template<typename T>
T Complex<T>::getIm()
{
	return im;
}

int main()
{
	Complex<int> c1(2, 3);
	cout << c1.getRe() << ": " << c1.getIm() << endl;

	return 0;
}
