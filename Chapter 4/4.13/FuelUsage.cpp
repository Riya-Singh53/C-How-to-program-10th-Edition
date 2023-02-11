#include<iostream>
#include<string>
using namespace std;
int main(){
	double litres;
	double totallitres{ 0 };

	double kmperlitre;
	double totalkmperlitre{ 0.00 };

	int kmdriven;
	int totalkmdriven{ 0 };
	cout << "enter kmdriven:" << endl;
	cin >> kmdriven;

	while (kmdriven != -1){
		cout << "enter litres:";
		cin >> litres;
		kmperlitre = kmdriven / litres;
		cout << "kmperlitre" << kmperlitre << endl;
		totalkmdriven = kmdriven + totalkmdriven;
		totallitres = totallitres + litres;

		totalkmperlitre = totalkmdriven / totallitres;

		cout << "total kms per litre" << totalkmperlitre << endl;
		cout << "enter kilometresdriven";

		cin >> kmdriven;
	}
	return 0;
}
