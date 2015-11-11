#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>

using namespace std;

vector<int> arr;

void Add()
{
	for( size_t i = 0 ; i < 100 ; ++i )
		arr.push_back(rand());
}

void Avg()
{
	double sum = 0;
	for( size_t i = 0; i < arr.size()/2; ++i )
		sum += arr[i];
	sum /= arr.size();
}

void Reverse()
{
	reverse(arr.begin(),arr.end());
}



int main()
{
	puts("Program Start");
	srand(time(NULL));
	for( ;; ) {
		int op = rand()%3;
		switch(op) {
			case 0:
				Add();
				break;
			case 1:
				Avg();
				break;
			case 2:
				Reverse();
				break;
			default:
				break;
		}
	}
	return 0;
}
