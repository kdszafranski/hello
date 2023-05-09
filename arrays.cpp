#include <iostream>

using namespace std;

void showArray(int arr[]) {
    cout << arr[2] << endl;
}

int main() {

    int numbers[3] = {3, 5, 9};
    
    showArray(numbers);

    return 0;
}