#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c&& a + c > b&&b + c > a)
	{
		cout << "�ܳ�Ϊ" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���ǵ���������";
		}
		else
		{
			cout << "�����ǵ���������";
		}
	}
	else{
		cout << "�޷�����������";
	}
	return 0;
}
