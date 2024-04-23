#include <iostream>
#include <string>
#include <algorithm>

std::string isPositiv(std::string n) {
    std::reverse(n.begin(), n.end());
    return n;
}

int main()
{
    std::string n;
    std::cin >> n;
    std::cout << isPositiv(n);
}