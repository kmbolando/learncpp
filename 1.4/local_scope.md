###1. What does the following program print?
		#include <iostream>
		 
		void doIt(int x)
		{
		   x = 3;
		   int y = 4;
		   std::cout << "doIt: x = " << x << " y = " << y << std::endl;
		}
		 
		int main()
		{
		    int x = 1;
		    int y = 2;
		    std::cout << "main: x = " << x << " y = " << y << std::endl;  //main: x = 1 y = 2
		    doIt(x);																											//doit: x = 3 y = 4
		    std::cout << "main: x = " << x << " y = " << y << std::endl;	//main: x = 1 y = 2
		    return 0;
		}
		
