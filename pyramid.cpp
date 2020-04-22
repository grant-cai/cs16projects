#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    for (int r = 0; r < n; r++){
        for(int c = 0; c <= r; c++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int r = 0; r < n; r++){
        for(int c = 0; c < n-r; c++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}