#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
//#define DVOICHNAYA
#define SHESTN
#ifdef DVOICHNAYA
	int decimal;
	
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //максимально возможная разрядность числа
	bool bin[MAX_BIN_CAPACITY] = {}; //этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;// получаем двоичный разряд числа и сохраняем его в массив
		decimal /= 2; // убираем двоичный разряд из исходного числа
	}
	for (i--; i > 0; i--)
	{
		cout << bin[i];
	}
#endif DVOICHNAYA
#ifdef SHESTN
	int n;
	cout << "Введите десятичное число: "; cin >> n;
	cout << hex << n;
#endif SHESTN
}
