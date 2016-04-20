//#include "stdafx.h" // Uncomment this line if using Visual Studio
#include <iostream>
 
int main()
{
    using namespace std;
    cout << "Enter a number: "; // asks user for a number within terminal
    int x = 0;
    cin >> x; // read number from console and store it in x
    cout << "You entered " << x << endl;
    return 0;
}

/*----------------------------------------------
Original Code

//#include "stdafx.h" // Uncomment this line if using Visual Studio
#include <iostream>
 
int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x = 0;
    std::cin >> x; // read number from console and store it in x
    std::cout << "You entered " << x << std::endl;
    return 0;
}

Courtesy of
http://www.learncpp.com/cpp-tutorial/1-3a-a-first-look-at-cout-cin-endl-namespaces-and-using-statements/
*/
