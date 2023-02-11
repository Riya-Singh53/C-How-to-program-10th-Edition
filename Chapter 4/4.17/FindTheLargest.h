#pragma once
#include<iostream>

using namespace std;
class FindTheLargest{
private:
	int count;
	int number;
	int largest;
  
public:
	FindTheLargest();
	~FindTheLargest();
	int findLargest(int, int, int);
};
