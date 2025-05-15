#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void getScores(int rating[], string text){
    stringstream ss(text);
    for(int i=0; i<3; i++){
        ss >> rating[i];
    }
}
int main()
{
    int ratingA[3], ratingB[3];
    int scoreA, scoreB;
    scoreA = 0;
    scoreB = 0;
    string text;

    getline(cin, text);
    getScores(ratingA, text);
    getline(cin, text);
    getScores(ratingB, text);

    for(int i=0;i<3;i++){
        if(ratingA[i]>ratingB[i]){
            scoreA++;
        }
        else if(ratingA[i]<ratingB[i]){
            scoreB++;
        }
    }

    cout << scoreA << " " << scoreB << endl;
}