#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    int k = n - 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<k){
                cout << " ";
            }
            else{
                cout << "#";
            }
        }
        cout << endl;
        k--;
    }
}