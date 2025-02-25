#include <iostream>
#include "LogCon.h"
using namespace std;


int main() {
    cout << R"(a b   !a  a&b a|b a->b a~b a^b)" << "\n";

    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            std::cout << a << " " << b << " " << " | "
                    << NOT(a) << "   " << OR(a, b) << "   " << AND(a, b) << "   " << IMP(a, b) << "   " << EQ(a, b) <<
                    "    " << XOR(a, b) << "    " << std::endl;
        }
    }

    cout << "a b c F\n";

    for (int a = 1; a >= 0; a--) {
        for (int b = 1; b >= 0; b--) {
            for (int c = 0; c <= 1; c++) {
                std::cout << a << " " << b << " " << c << " " << F7(a, b, c) << std::endl;
            }
        }
    }

    return 0;
}
