#include <string>
#include <sstream>
#include <iostream>
using namespace std;
void getNum(int num[100][100], int len){
    string text = " ";
    for(int i=0;i<len;i++){
        getline(cin, text);
        stringstream ss(text);
        for(int j=0; j<len; j++){
            ss >> num[i][j];
        }
    }
}
int diagonalDifference(int num[100][100], int len){
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<len; i++){
        sum1 += num[i][i];
        sum2 += num[i][len-1-i];
    }

    int sum = sum1 - sum2;
    if (sum<0){
        sum = sum * -1;
    }
    return sum;
}

int main(){
    int len;
    cin >> len;
    cin.ignore();
    int num[100][100];

    getNum(num, len);
    cout << diagonalDifference(num, len) << endl;
}