#include<iostream>

using namespace std;
int main()
{
	unsigned int valuecount{ 1 };

	while (valuecount <= 3){
		cout << "Enter the value 1 or 2: ";
		int val;
		cin >> val;
		cout << endl;

		if (val != 1 && val != 2){
			cout << "Enter proper value 1 or 2: ";
			cin >> val;
		}
		valuecount++;
	}
}
