#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand;
	int maxRand;	
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand - maxRand < 10)
	{
		maxRand = minRand + 10;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	int buf;         // Сортировка
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i] > arr[i+1])
			{
				buf = arr[i];
				arr[i] = arr[i+1];
				arr[i + 1] = buf;
			}
		}
	}
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
}