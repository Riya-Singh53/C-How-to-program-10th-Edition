#include<iostream>
using namespace std;
int main(){
	while (true){
		double hours = 0;
		cout << "enter number of hours worked (-1 to end): ";
		cin >> hours;
		if (hours == -1){
			return 0;
		}
		cout << "\nAccrued leave: " << 2 + 0.1*hours << " hours\n";
	}
}
