#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double pi = 3.14159;
	int r, h;
	cout << "������r��h��ֵ" << endl;
	cin >> r >> h;
	double v;
	v = (1.0 / 3) * pi * r * r * h;
	cout << "Բ׶���Ϊ" << v << endl;
	return 0;
}