#include <iostream>
#include <string>

int countMaxSubstring(const std::string& str) {
    int count = 0;

    // Iterate through each character in the string
    for (int i = 0; i < str.length() - 1; i++) {
        count++;
    }

    return count;
}

int main() {
    std::string input;
    std::cin >> input;

    int maxSubstringCount = countMaxSubstring(input);
    std::cout << maxSubstringCount << std::endl;

    return 0;
}
