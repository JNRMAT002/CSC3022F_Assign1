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
    char cmdInput;

    cout << "Test cmd line input: " ;

    for ( ; ; )
    {
        cin >> cmdInput;

        if (cmdInput == 'q'){
            break;
        }
    }
    
}