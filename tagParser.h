#ifndef MY_HDR
#define MY_HDR

#include <string>
#include <vector>

namespace JNRMAT002 {

    struct TagStruct
    {
        std::vector<std::string> tagName;
        std::vector<int> tagPairs;
        std::vector<std::string> tagText;
    };

    void printInstructions() {
    // Command loop input instructions for user
    std::cout << "\n" << "r: Read and process tag file" << "\n"
    << "p: Print all tags" << "\n" << "d: Dump tags to text file"
    << "\n" << "l: List tag data" << "\n" << "q: Quit" << "\n" << std::endl;
    }
}

#endif