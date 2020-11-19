#include <iostream>
#include <string>
using namespace std;

typedef string s_arr[10];
using s_arr = string[10];

string str[10];
string (*func()) [10];
s_arr *func();
auto func() -> string(*)[10];
decltype(str) *func();

