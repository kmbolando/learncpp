//#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream>
 
// getValueFromUser will read a value in from the user, and return it to the caller
int getValueFromUser()
{
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    return a;
}
 
int main()
{
    int x = getValueFromUser(); // first call to getValueFromUser
    int y = getValueFromUser(); // second call to getValueFromUser
 
    std::cout << x << " + " << y << " = " << x + y << std::endl;
 
    return 0;
}

//Notes
/* Main utilizes "getValueFromUser" which will determine the other two variables (x and y).
It then echoes out a linear algebreic expression telling the sum of the two inputs*/
