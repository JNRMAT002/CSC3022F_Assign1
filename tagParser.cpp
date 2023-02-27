#include <iostream>
#include <fstream>
#include <vector>
#include "tagParser.h"

using namespace std;

int main() {
    char cmdInput; // Command line input from user

    // Event loop
    for ( ; ; )
    {
        JNRMAT002::printInstructions();

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

    return 0;
}