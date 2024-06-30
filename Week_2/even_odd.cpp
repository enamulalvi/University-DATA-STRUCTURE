#include <iostream>

using namespace std;

int main() {

    int array[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

    int evenCount = 0;
    int oddCount = 0;


    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }


    cout << evenCount << " even numbers" << endl;
    cout << oddCount << " odd numbers" << endl;

    return 0;
}
