#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "�����뻪���¶�" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "ת�������϶�Ϊ" << fixed << setprecision(2) << c << endl;
	return 0;
}
