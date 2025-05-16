#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    long int nums[100000];
    long int max; 
    int n, sum = 0;
    cin >> n;
    cin.ignore();
    string text;
    getline(cin, text);
    stringstream ss(text);

    int real = 0;
    for(int i=0;i<n;i++){
        if (ss >> nums[i]){
            real++;
        }
        else{
            break;
        }
    }

    if (real == 0) {
        cout << 0 << endl;
        return 0;
    }


    max = *max_element(nums, nums+real);

    for(int i=0;i<real;i++){
        if(nums[i] == max){
            sum++;
        }
    }
    cout << sum << endl;
}