#include<iostream>
using namespace std;
int main()
{
	int largest = 0;
	int second_largest = 0;
	unsigned int i = 0;

	while (i < 10){
		int input;
		cout << "Enter a number: ";
		cin >> input;

		if (input > largest){
			second_largest = largest;
			largest = input;
		}
		i++;
	}
	cout << "largest number:" << largest << "\n second largest number:" << second_largest << endl;
}
