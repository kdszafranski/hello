// fizbuzz
/*
any number divisible by three with the word "fizz",
any number divisible by five with the word "buzz", and
any number divisible by both 3 and 5 with the word "fizzbuzz".

*/

#include <iostream>

using namespace std;

void fizzBuzz(int arr[]);

int main() {

    int numbers[] = {3, 9, 20, 15, 10, 1};

    // fizz, fizz, nothing, fizzbuzz, buzz

    cout << "size using sizeof: " << sizeof(numbers) / sizeof(numbers[0]);

    fizzBuzz(numbers); // passes pointer to array

    return 0;
}

void fizzBuzz(int *param) { // creates a pointer to array

    for(int i = 0; i < 8; i++) {
        cout << param[i] << ": ";

        if(param[i] == 0) {
            cout << " skip " << endl;
            continue;
        }
        if(param[i] % 3 == 0 && param[i] % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if(param[i] % 3 == 0) {
            // fizz
            cout << "Fizz" << endl;
        } else if(param[i] % 5 == 0) {
            cout << "Buzz" << endl;
        }
    }
}