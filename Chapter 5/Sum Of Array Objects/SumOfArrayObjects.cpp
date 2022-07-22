#include<iostream>
#include<array>
using namespace std;

int sumArray(array<int,10> arr);

int main()
{
	array<int, 10> input = {156,1002,561,451,223,897,941,5001,12,-9};
	int sum = sumArray(input);
	cout << "Your Sum is " << sum << endl;
	return 0;
}

int sumArray(array<int, 10> arr)
{
	int len = arr.size();
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}
