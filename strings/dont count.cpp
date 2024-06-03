#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<char,string> keypad = {
    {'1', "ABC"},
    {'2', "DEF"},
    {'3', "GHI"},
    {'4', "JKL"},
    {'5', "MNO"},
    {'6', "PQR"},
    {'7', "STU"},
    {'8', "VWX"},
    {'9',"YZ"}
};

int countWordCombinations(const string& digits, int index) {
    if (index == digits.length()) {
        return 1;
    }

    char currentDigit = digits[index];
    if (keypad.find(currentDigit) == keypad.end()) {
        return countWordCombinations(digits, index + 1);
    }

    std::string letters = keypad[currentDigit];
    int count = 0;

    for (char letter : letters) {
        count += countWordCombinations(digits, index + 1);
    }

    return count;
}

int main() {
    string s;
    cin>>s;
    int combinationsCount = countWordCombinations(s, 0);
    std::cout << combinationsCount << std::endl;

    return 0;
}