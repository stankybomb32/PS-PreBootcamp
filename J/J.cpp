#include <iostream>
#include <string>
using namespace std;

int main(){
    string text, ampm;
    int hours;

    // hh:mm:ssPM
    getline(cin, text);
    hours = stoi(text.substr(0,2));
    ampm = text.substr(8,2);
    
    if(ampm == "PM"){
        hours += 12;
    }
    if(hours<10){
        cout << '0' ;
    }
    cout << hours << text.substr(2,6) << endl;
}