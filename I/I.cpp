#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    long int nums[10000];
    long int max; 
    int n, sum = 0;
    cin >> n;
    cin.ignore();
    string text;
    getline(cin, text);
    stringstream ss(text);

    for(int i=0;i<n;i++){
        ss >> nums[i];
    }

    max = *max_element(nums, nums+n);

    for(int i=0;i<n;i++){
        if(nums[i] == max){
            sum++;
        }
    }
    cout << sum << endl;
}