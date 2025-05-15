#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    long long int sum;
    long int num;
    int len;
    string text;
    sum = 0;

    cin >> len;
    cin.ignore();
    getline(cin, text);
    stringstream ss(text);

    for(int i=0; i<len; i++){
        ss >> num;
        sum += num;
    }
    cout << sum << endl;
}