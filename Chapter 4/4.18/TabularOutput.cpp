#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int x = 1;
	cout << "x" << setw(7) << " 2*x" << setw(7) << " 4*x" << setw(7) << " 8*x" << endl;

	while (x <= 10){
		cout << 1 * x << setw(7) << 2 * x << setw(7) <<  4 * x << setw(7) <<  8 * x<< endl;
		x++;
	}
}
