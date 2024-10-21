
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[5] = {5,  6, 7, 8, 9};
    int largest = arr[0];
    int second = INT_MIN;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    cout << "The second largest element is " << second << endl;
    return 0;
}
