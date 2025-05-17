#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string text;
    getline(cin, text);
    stringstream ss(text);

    long int x1, v1, x2, v2;
    ss >> x1; ss >> v1; ss >> x2; ss >> v2;
    string result;

    if(x1 < x2){
        if(v1 > v2 && (x2 - x1) % (v1 - v2) == 0){
            result = "YES";
        }
        else{
            result = "NO";
        }
    }
    else if(x2 < x1 && (x1 - x2) % (v2 - v1) == 0){
        if(v2 > v1){
            result = "YES";
        }
        else{
            result = "NO";
        }
    }
    else{
        result = "YES";
    }

    cout << result << endl;
}