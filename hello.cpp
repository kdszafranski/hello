#include <iostream>
#include <vector>
#include <string>

using namespace std;

void myThing(int &x, int y) { // x passed by reference, y by value
    cout << ++x << endl; // changes x and one
    cout << ++y << endl; // does not affect two in main()
    cout << &x;
}

int main() {
    // vector<string> msg {"hello", "world", "from", "VS Code"};

    // string food = "Pizza";
    // string* ptr = &food; // type* creates pointer to this type, & is reference operator and gets memory location of this variable

    // cout << "pointer memory address: " << ptr << '\n';

    // string newFood = *ptr; // dereference operator is * in front of a pointer, gets the value at that reference
    // cout << "deref, value: " << newFood << '\n';

    // *ptr = "Gyros"; // Dereference ptr targets value with new value (shared with food variable)

    // cout << "ptr is now: " << *ptr << '\n';

    // cout << "food is now: " << food;


    int one = 12;  
    int two = 20;

    myThing(one, two);
    cout << &one << endl;
    cout << "two " << two;

    cout << endl;

    return 0;
}


