#include <iostream>
using namespace std;

int main(){
    int score;

    cout << "Enter your score: " << endl;
    cin >> score;

    if(score < 0 || score > 100){
        cout << "Not a valid score" << endl;
        exit(1);
    }
    else if(score >= 90 && score <= 100){
        cout << "Grade is A" << endl;
    }
    else if(score >= 80 && score < 90){
        cout << "Grade is B" << endl;
    }
    else if(score >= 70 && score < 80){
        cout << "Grade is C" << endl;
    }
    else if(score >= 60 && score < 70){
        cout << "Grade is D" << endl;
    }
    else{
        cout << "Grade is F" << endl;
    }

}