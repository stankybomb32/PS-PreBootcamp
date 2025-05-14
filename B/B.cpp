#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int sum, len, num;
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