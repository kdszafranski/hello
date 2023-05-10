#include <iostream>

using namespace std;
const int MAX = 4;

int main()
{
    const char *names[MAX] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
    // const char nameValues[] = {"Zara Ali"};
    // observation:
    // names contains 4 elements, each one a pointer to the first char in the name
    // 

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << (names + i) << " : "; // memory address of first char using pointer arithmetic
        cout << names[i] << endl; // value is the entire name...
    }

    return 0;
}