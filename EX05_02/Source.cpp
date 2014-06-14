#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		if (list[i]>list[i+1])
			return false;
		else
			return true;
	}
}

int main() {
	int list1[] = { 3, 5, 1, 0, 2, 8, 7 };
	bool a = isSorted(list1, 7);
	cout << a << endl;

	double list2[] = { 3.5, 0.5, 1.4, 0.4, 2.5, 1.8, 4.7 };
	bool b = isSorted(list2, 7);
	cout << b << endl;

	string list3[] = { "Atlanta", "Denver", "Chicago", "Seattle" };
	bool c = isSorted(list3, 4);
	cout << c << endl;


	return 0;
}