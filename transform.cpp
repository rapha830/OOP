#include <iostream>
#include <string>

string decimalToBinary(int n) {
    if (n == 0) return "0";

    std::string binary = "";
    while (n > 0) {
        int remainder = n % 2;              
        binary = to_string(remainder) + binary;  
        n = n / 2;  
    }                      
    return binary;
}

int main() {
    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;

    std::string binary = decimalToBinary(number);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}
