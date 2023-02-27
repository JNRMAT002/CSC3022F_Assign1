#include <iostream>
#include <string>
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
        struct JNRMAT002::TagStruct tags;

        cin >> cmdInput;

        string fname; //File name for 'read' cmd

        if (cmdInput == 'r') {
            cout << "Enter text file name (include .txt in tour response): ";
            string lineText;
            cin >> fname;
            ifstream TagFile(fname);

            while (getline (TagFile, lineText)) {
                string tagTextTemp; // to concatenate each word in the line to form the full tagText
                string tagNameTemp;
                int linePos = 0;
                int lineEnd = lineText.length();

                while (linePos != lineEnd) {
                    if (lineText.substr(linePos, linePos+2) == "</") {
                        linePos += lineText.substr(linePos, lineText.find('>')).length()+1;
                    }
                    else if (lineText.substr(linePos, linePos+1) == "<") {
                        tagNameTemp = lineText.substr(linePos+1, lineText.find('>')-1);
                        linePos += lineText.substr(linePos, lineText.find('>')+1).length();

                        cout << tagNameTemp << endl;
                    }
                    else {
                        tagTextTemp = lineText.substr(linePos, lineText.find('<')-1);
                        linePos += lineText.substr(linePos, lineText.find('<')-1).length();

                        if (tagTextTemp.find('<')) {
                            tagTextTemp = tagTextTemp.substr(0, tagTextTemp.find('<'));
                        }

                        cout << tagTextTemp << endl;
                    }

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