// Lab_03_3.cpp
// ��������� �������� ���㳿���
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// ������������ � ������ ����
	if (x <= -6)
		y = R;
	else
		if (x > -6 && x <= R)
			y = ((x + 6) / (x - R)) + 1;
		else
			if (x > R && x <= 0)
				y = R - sqrt(R * R - (x + R) * (x + R));
			else
				if (x > 0 && x <= R)
					y = sqrt(R * R - x * x);
				else
					y = R - x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get ();
	return 0;
}

