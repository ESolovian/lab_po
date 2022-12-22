#include <iostream>
#include <cmath>
#include <cassert>

int calc(int a, char oper, int b){
    if (oper == '+'){
        return a + b;
    } else if (oper == '-'){
        return a - b;
    } else if (oper == '*'){
        return a * b;
    } else if (oper == '/'){
        return a / b;
    } else if (oper == '^'){
        return std::pow(a, b);
    }

    return 0;
}

void testCalc(){
    assert(calc(23, '+', 268) == 290);
    assert(calc(173, '-', 745) == -572);
    assert(calc(29, '*', 17) == 493);
    assert(calc(188, '/', 4) == 47);
    assert(calc(2, '^', 10) == 1024);
    std::cout << "Program is working!" << '\n';
}

int main() {
    testCalc();
    return 0;
}
