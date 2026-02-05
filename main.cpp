#include <iostream>
#include <string>

using namespace std;
static int Max_Arg = 2;
static int Min_Arg = 1;
static int First_Input = 1;
void printUsage() {
    cerr << "Fatal: Improper usage\n";
    cerr << "Usage: P0 [string]\n";
}

int main(int argc, char* argv[]) {
    string input;

    // Too many arguments
    if (argc > Max_Arg) {
        printUsage();
        return 1;
    }

    // Case: P0 string
    if (argc == Max_Arg) {
        input = argv[First_Input];
    }
    // Case: P0 OR P0 < filename
    else if (argc == Min_Arg) {
        if (!(cin >> input)) {
            printUsage();
            return 1;
        }
    }

    cout << "Hello, " << input << endl;
    return 0;
}
