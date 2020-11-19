#include <iostream>
#include <string>

using namespace std;

void print(const int arr[], size_t size);
//void print(const int arr[10]);
void print(const int (&arr)[10]);

int main()
{
//	int arr[] = {2, 4, 6, 8, 10};
	int arr[9] = {1};
	//print(arr, sizeof(arr) / sizeof(int));
//	print(arr, end(arr) - begin(arr));
	
	print(arr);

	return 0;
}

void print(const int arr[], size_t size)
{
	if (arr != nullptr)
	{
		for (size_t idx = 0; idx < size; ++idx)
		{
			cout << arr[idx] << endl;
		}
	}

}

/*
void print(const int arr[10])
{
	for (size_t i = 0; i != 10; ++i)
	{
		cout << arr[i] << endl;
	}
}
*/

void print(const int (&arr)[10])
{
	for (size_t i = 0; i != 10; ++i)
	{
		cout << arr[i] << endl;
	}
}

