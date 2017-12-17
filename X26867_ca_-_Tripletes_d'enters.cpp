#include <iostream>

int main () {
    uint32_t cont = 0;
    for(uint32_t a, b, c; std::cin >> a >> b >> c;) cont += !(a%2 or b%2 or c%2) or (a%3 or b%3 or c%3);
    std::cout << cont << std::endl;
}
