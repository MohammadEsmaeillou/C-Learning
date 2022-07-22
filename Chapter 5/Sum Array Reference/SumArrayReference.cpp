#include<iostream>
#include<array>
using namespace std;

void sumArray(array<int, 10> arr, int& sum);

int main()
{
	int sum = 0;
	array<int, 10> input = {156,1002,561,451,223,897,941,5001,12,-9};
	sumArray(input, sum);
	cout << "Your Sum is " << sum << endl;
	return 0;
}

void sumArray(array<int, 10> arr, int& sum)
{
	for (int num : arr)
	{
		sum += num;
	}
}
