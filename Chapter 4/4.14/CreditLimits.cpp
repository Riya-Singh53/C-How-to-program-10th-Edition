#include<iostream>
using namespace std;
int main()
{
	int AccountNum;
	double BeginBalance;
	double TotalChargemonth;
	double totalcreditmonth;
	double allowcreditlimits;
	cout << "enter the account number:";
	cin >> AccountNum;
	while (AccountNum != -1)
	{ 
		cout << endl << "enter begining balance:";
		cin >> BeginBalance;
		cout << endl << "Enter the total Charge : ";
		cin >> TotalChargemonth;
		cout << endl << "enter the total credit :";
		cin >> totalcreditmonth;
		cout << endl << "enter the credit limits : ";
		cin >> allowcreditlimits; 
		double Newbalance = BeginBalance + TotalChargemonth - totalcreditmonth;
		cout << "New balance is :" << Newbalance << endl;
		if (Newbalance > allowcreditlimits)
		{ 
			cout << "account number :" << AccountNum << endl;
			cout << "Creadit limit :" << allowcreditlimits << endl;
			cout << "new balance is :" << Newbalance << endl;
			cout << "Credit Limit Exceeded";
		}
		cout << "enter the account number:";
		cin >> AccountNum;
	}
}
