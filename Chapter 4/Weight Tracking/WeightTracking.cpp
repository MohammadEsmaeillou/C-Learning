#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> weight;
    string nameTemp;
    int weightTemp;
    for(int i = 0; i < 5; i++)
    {
        cout << "Please Enter a Name" << endl;
        getline(cin,nameTemp);
        names.push_back(nameTemp);
        cout << "Please Enter a Weight" << endl;
        cin >> weightTemp;
        weight.push_back(weightTemp);
        cin.get();
    }
    cout << endl<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout << names[i] << " weighs " << weight[i] << " lbs" << endl;
    }
}
