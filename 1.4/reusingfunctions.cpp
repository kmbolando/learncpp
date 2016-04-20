//#include <stdafx.h> // Visual Studio users need to uncomment this line
#include <iostream>
 
// getValueFromUser will read a value in from the user, and return it to the caller
//"getvaluefromuser" renamed to "gvU"
int gvU()
{
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    return a;
}
 
int main()
{
    int x = gvU(); // first call to gvU
    int y = gvU(); // second call to gvU
 
    std::cout << x << " + " << y << " = " << x + y << std::endl;
 
    return 0;
}

//Notes
/* Main utilizes "getValueFromUser" (gvU) which will determine the other two variables (x and y).
It then echoes out a linear algebreic expression telling the sum of the two inputs*/
//Functions can be reused and be indivdualised  directed by a variable
