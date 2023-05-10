// refType_function_returns.cpp
// compile with: /EHsc

#include <iostream>
using namespace std;

// https://learn.microsoft.com/en-us/cpp/cpp/reference-type-function-returns?view=msvc-170

class Point
{
public:
    // Define "accessor" functions as
    //  reference types.
    unsigned &x()
    {
        return obj_x;
    }
    unsigned &y()
    {
        return obj_y;
    }

private:
    // Note that these are declared at class scope:
    unsigned obj_x = 0;
    unsigned obj_y = 19;

}; // end Point class

int main()
{
    Point ThePoint;
    // Use x() and y() as l-values.
    // ThePoint.x() = 7;
    // ThePoint.y() = 9;

    // Use x() and y() as r-values.
    cout << "x = " << ThePoint.x() << "\n"
         << "y = " << ThePoint.y() << "\n";
}