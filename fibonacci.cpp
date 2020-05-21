#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "You gave us the wrong # of command line arguments!\n";
        cerr << "Usage: " << argv[0] << " n\n";
        // stop the program here
        exit(1);
    }

    int n = atoi(argv[1]);

    cout << fibonacci(n) << endl;
}