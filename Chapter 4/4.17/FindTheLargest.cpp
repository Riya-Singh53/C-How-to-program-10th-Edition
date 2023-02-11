#include<iostream>
#include"FindTheLargest.h"
using namespace std;

FindTheLargest::FindTheLargest(){
  
}
FindTheLargest::~FindTheLargest(){

}
int FindTheLargest::findLargest(int count, int number, int largest)
{
	while (count < 10)
	{
		cout << "enter the number :";
		cin >> number;
		cout << endl;
		if (number > largest)
			largest = number;
		count++;
	}
	return largest;
}
