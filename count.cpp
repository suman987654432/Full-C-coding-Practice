// OCOUNT DIGIT
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number = ";
    cin >> n;
    
    while (n > 0) {
        n = n / 10;
        count++;
    }
    
    cout << "Number of digits: " << count;
    return 0;
}