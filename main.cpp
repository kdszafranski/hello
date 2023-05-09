#include <iostream>
int count;
extern void write_extern(); // extern is not needed
 
int main() {
   count = 100;
   write_extern();

   return 0;
}