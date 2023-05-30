#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int range[5] = {};
	for (int i = 0; i < 5; i++)
	{
		range[i] = 70 + rand() % 10;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << range[i] << "\t";
	}
	cout << endl;
}