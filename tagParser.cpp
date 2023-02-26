#include <iostream>
#include <fstream>
#include <vector>
#include "tagParser.h"

using namespace std;

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

        string fname; //File name for 'read' cmd

        if (cmdInput == 'r'){
            string lineText;
            cin >> fname;
            ifstream TagFile(fname);

            while (getline (TagFile, lineText)) {
                cout << lineText << endl;
            }

            TagFile.close();
        }

        // Event loop quit - terminates program
        if (cmdInput == 'q'){
            break;
        }
    }    
}