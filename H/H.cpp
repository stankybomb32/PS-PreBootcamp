#include <climits>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int nums[5];
    string text;
    getline(cin, text);
    stringstream ss(text);
    
    for(int i=0; i<5; i++){
        ss >> nums[i];
    }

    cout << accumulate(nums, nums + 5, 0) - *max_element(nums, nums +5) << " ";
    cout << accumulate(nums, nums + 5, 0) - *min_element(nums, nums +5) << endl;
}