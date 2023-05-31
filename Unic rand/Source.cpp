#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
		const int n = 10;
		int arr[n] = {};
		for (int i = 0; i < n; i++)
		{
			bool unique; //флаг уникальность
			do
			{
			arr[i] =70+rand()%n;
			unique = true; // предположим, что сгенерировалость уникальное число, но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false; //запоминаем то, что число в arr[i] не уникальное
					break;
				}
			}
			} while (!unique);
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;

}