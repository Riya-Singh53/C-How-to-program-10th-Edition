#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int LapCompleted;
	double SponserRate;
	double StudentContribution;
	double TotalFund{ 0 };
	cout << "Enter laps completed(-1 to end): ";
	cin >> LapCompleted;

	while (LapCompleted != -1){
		cout << setprecision(2) << fixed;
		cout << "Enter sponsorship rate: ";
		cin >> SponserRate;

		if (LapCompleted <= 40){
			StudentContribution = LapCompleted * SponserRate;
			cout << "Student Contribution is: " << StudentContribution << endl;
		}
		else{
			StudentContribution = (LapCompleted * SponserRate) + SponserRate;
			cout << "Student contribution is : " << StudentContribution << endl;
		}
		cout << "\nEnter laps completed(-1 to end): ";
		cin >> LapCompleted;
		TotalFund += StudentContribution;
	}
	cout << "Total funds raised: " << TotalFund;
}

