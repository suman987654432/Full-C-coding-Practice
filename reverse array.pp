#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 9, 5, 6};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = s-1;i>=0;i--) {
        
       cout<<arr[i];
    }
}

  

