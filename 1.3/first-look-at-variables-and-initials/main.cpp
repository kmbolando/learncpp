#include <iostream>
 
int main()
{
    // define an integer variable named x
    int x;
    
    // print the value of x to the screen (dangerous, because x is uninitialized)
    std::cout << x;
 
    return 0;
}
