#include <iostream>

using namespace std;

/*
struct TagStruct
{
    string tagName;
    int tagPairs;
    string tagText;
}; */


int main() {
    char cmdInput; // Command line input from user

    // Command loop input instructions for user
    cout << "r: Read and process tag file" << "\n"
    << "p: Print all tags" << "\n" << "d: Dump tags to text file"
    << "\n" << "l: List tag data" << "\n" << "q: Quit" << endl;

    // Event loop
    for ( ; ; )
    {
        cin >> cmdInput;

        // Event loop quit - terminates program
        if (cmdInput == 'q'){
            break;
        }
    }    
}