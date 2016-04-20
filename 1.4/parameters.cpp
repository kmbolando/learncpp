/* Courtesy
http://www.learncpp.com/cpp-tutorial/1-4a-a-first-look-at-function-parameters/
*/

#include <iostream>
 
// This function has two integer parameters, one named x, and one named y
void printValues(int x, int y)
{
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    /*This should result in an output:
    X
    Y
    */
}
 
int main()
{
    printValues(7, 8); // This function call has two arguments, 6 and 7
    return 0;
    /* The values determine X and Y, so X=7 and Y=7 */
}
