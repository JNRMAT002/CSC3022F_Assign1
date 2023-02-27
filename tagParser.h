#ifndef MY_HDR
#define MY_HDR

#include <string>

namespace JNRMAT002 {

    struct TagStruct
    {
        std::string tagName;
        int tagPairs;
        std::string tagText;
    };

    void printInstructions() {
    // Command loop input instructions for user
    std::cout << "\n" << "r: Read and process tag file" << "\n"
    << "p: Print all tags" << "\n" << "d: Dump tags to text file"
    << "\n" << "l: List tag data" << "\n" << "q: Quit" << "\n" << std::endl;
    }
}

#endif