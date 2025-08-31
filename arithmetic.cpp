#include <iostream>

int binaryAdd(int a, int b) {
    return a + b;
}

int binarySubtract(int a, int b) {
    return a - b;
}

int binaryLeftShift(int a, int shift) {
    return a << shift;
}

int binaryRightShift(int a, int shift) {
    return a >> shift;
}

int main() {
    int x = 5; 
    int y = 3;  

    std::cout << "x = " << x << " (" << bitset<4>(x) << ")\n";
    std::cout << "y = " << y << " (" << bitset<4>(y) << ")\n\n";

    std::cout << "Add: " << binaryAdd(x, y) << std::endl;
    std::cout << "Subtract: " << binarySubtract(x, y) << std::endl;
    std::cout << "Left Shift x by 1: " << binaryLeftShift(x, 1) << std::endl;
    std::cout << "Right Shift x by 1: " << binaryRightShift(x, 1) << std::endl;

    return 0;
}
