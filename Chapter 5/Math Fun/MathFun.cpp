#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int poweResult = pow(2,3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.2);
    int floorResult = floor(4.2);
    int log = log2(512);

    cout << "2^3 is " << poweResult << endl;
    cout << "sqrt of 25 is " << sqrtResult << endl;
    cout << "ceiling of 4.2 is " << ceilResult << endl;
    cout << "Floor of 4.2 is " << floorResult << endl;
    cout << "Log of 512 is " << log << endl;

    return 0;
}
