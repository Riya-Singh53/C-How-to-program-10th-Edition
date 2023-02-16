#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "enter the x and y value :";
	cin >> x >> y;
	if (x > 5 && y > 5)
		cout << "x and y is greater than 5 ";
	else if (x > 5)
		cout << "x is greater than 5";
	else if (y > 5)
		cout << "y is greater than 5 ";
	else
		cout << "x and y less than 5";
}
