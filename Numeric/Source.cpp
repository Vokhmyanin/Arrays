#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
//#define DVOICHNAYA
#define SHESTN
#ifdef DVOICHNAYA
	int decimal;
	
	cout << "������� ���������� �����: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //����������� ��������� ����������� �����
	bool bin[MAX_BIN_CAPACITY] = {}; //���� ������ ����� ������� ������� ��������� �����
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;// �������� �������� ������ ����� � ��������� ��� � ������
		decimal /= 2; // ������� �������� ������ �� ��������� �����
	}
	for (i--; i > 0; i--)
	{
		cout << bin[i];
	}
#endif DVOICHNAYA
#ifdef SHESTN
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	cout << hex << n;
#endif SHESTN
}
