#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

int main(){
    float pos = 0; float zer = 0; float neg = 0;
    int len;

    cin >> len;
    cin.ignore();

    string text;
    getline(cin, text);
    stringstream ss(text);

    int num;
    for(int i=0; i<len; i++){
        ss >> num;
        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else if(num==0){
            zer++;
        }
    }

    pos = pos / len;
    printf("%.6f\n", pos);

    neg = neg / len;
    printf("%.6f\n", neg);

    zer = zer / len;
    printf("%.6f\n", zer);
    
}