#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 8, 9, 12, 19};

  
    for (int i = 0; i < 5; i++) {
       if (arr[i] % 2 ==0) {
            cout << "Even = " << arr[i] << endl;
        }
    }

}


#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[5] = {2, 8, 9, 12, 19};

    for (int i = 0; i < 5; i++) {
        arr[i]++;
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    }
