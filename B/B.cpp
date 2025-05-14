#include <iostream>
using namespace std;

int main()
{
    int sum, num, len;
    sum = 0;

    cin >> len;
    for(int i=0;i<len;i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
}