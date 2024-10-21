#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 8, 1, 12, 19};
    int min = arr[0];  

    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    cout << "Minimum=" << min<< endl;

 
}
