#include <iostream>
#include <bitset>
using namespace std;

int countDifferingBits(int a, int b) {
    int xorResult = a ^ b;
    int differingBits = 0;
    
    
    while (xorResult > 0) {
        differingBits += xorResult & 1;
        xorResult >>= 1;
    }
    
    return differingBits;
}

int minBitFlips(int P, int Q, int R) {
    int PQXOR = P ^ Q; 
    return countDifferingBits(PQXOR, R);
}

int main() {
    int P, Q, R;
    
    
   
    cin >> P >> Q >> R;
    
    
    int result = minBitFlips(P, Q, R);
    
   
   cout << result << endl;
    
    return 0;
}
