//Arrays
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 2,5,6,11,22 };
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[SIZE - 1 - i] << "\t";
	}
	cout << endl;
	int summ = 0;
	for (int i = 0; i < SIZE; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма элементов массива: " << summ << endl;
	double sr_arifm; sr_arifm=summ / SIZE;
	cout << "Среднее арифметическое: " << sr_arifm << endl;
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max;



}