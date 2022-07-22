#include <iostream>
using namespace std;

int product(int num1, int num2, int num3);

int main()
{
    int pro = product(5,10,2);
    cout << "Product is " << pro << endl;
    return 0;
}

int product (int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}
