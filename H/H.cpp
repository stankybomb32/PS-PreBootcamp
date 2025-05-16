#include <climits>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    long long int nums[5];
    string text;
    getline(cin, text);
    stringstream ss(text);
    
    for(int i=0; i<5; i++){
        ss >> nums[i];
    }

    long long int minSum = accumulate(nums, nums + 5, 0LL) - *max_element(nums, nums +5);
    long long int maxSum = accumulate(nums, nums + 5, 0LL) - *min_element(nums, nums +5);
    cout << minSum << " " << maxSum << endl;
}