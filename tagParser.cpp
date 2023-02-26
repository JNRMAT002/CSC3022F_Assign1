#include <iostream>
#include <cstdlib>

using namespace std;

/*
struct TagStruct
{
    string tagName;
    int tagPairs;
    string tagText;
}; */


int main() {
    char cmdInput;

    cout << "r: Read and process tag file" << "\n"
    << "p: Print all tags" << "\n" << "d: Dump tags to text file"
    << "\n" << "l: List tag data" << "\n" << "q: Quit" << endl;

    for ( ; ; )
    {
        cin >> cmdInput;

        if (cmdInput == 'q'){
            break;
        }
    }    
}