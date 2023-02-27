#include <iostream>
#include <fstream>
#include <sstream>
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

        if (cmdInput == 'r') {
            cout << "Enter text file name (include .txt in tour response): ";
            string lineText;
            cin >> fname;
            ifstream TagFile(fname);

            while (getline (TagFile, lineText)) {
                stringstream s(lineText); // line of text interpreted as stringstream
                string word; // stores each word in the line

                while (s >> word) {
                    cout << word;
                }

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