#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int choose;
	double a, b;
	char c;
back:
	cout << "��������Ҫ�����������������" << endl;
	cin >> a>>b;
	cout << "�����������+��-��*��/" << endl;
goback:
	cin >> c;
	switch (c)
	{
	case '+':cout << a + b << endl;
		cout << "��ѡ��1���������� 2������" << endl;
		int choose;
		cin >> choose;
		if (choose==1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'-':cout << a - b << endl;
		cout << "��ѡ��1���������� 2������" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'*':cout << a * b << endl;
		cout << "��ѡ��1���������� 2������" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'/':cout << a / b << endl;
		cout << "��ѡ��1���������� 2������" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	default:cout << "��Ч�����������������" << endl;
		goto goback;
	}
	return 0;
}
