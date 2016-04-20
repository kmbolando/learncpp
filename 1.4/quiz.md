My answers are in comments: (`//example` or `/*example*/`)

####1. What’s wrong with this program fragment?

    void multiply(int x, int y)                     //Multiply is in void so it can't do anything
    {
      return x * y;
    }
    
    int main()
    {
      std::cout << multiply(4, 5) << std::endl;    //And since it's in use;
      return 0;                                    //it will return a compiler error
    }
    
####2. What two things are wrong with this program fragment?

    int multiply(int x, int y)
    {
        int product = x * y;                        //No return
    }
    
    int main()
    {
        std::cout << multiply(4) << std::endl;      //The integer multiply() requires two (2) parameters but only shows one (1)
        return 0;
    }
    
####3. What value does the following program print?

    #include <iostream>
 
    int add(int x, int y, int z)
    {
       return x + y + z;
    }
     
    int multiply(int x, int y)
    {
        return x * y;
    }
     
    int main()
    {
       std::cout << multiply(add(1, 2, 3), 4) << std::endl;
       return 0;
    }
    //Adds: 1+2+3 = 6 = var1
    //Multiplies by 4: 6 * 4 = 24
    //It prints 24
    
####4. Write a function called doubleNumber() that takes one integer parameter and returns twice the value passed in.
    /*
    int doublenumber(int x)
    {
      return x + x;
    }
    */
####5. Write a complete program that reads an integer from the user (using cin, discussed in lesson 1.3a -- A first look at cout, cin, endl, namespaces, and using statements), doubles it using the doubleNumber() function you wrote for question 4, and then prints the doubled value out to the console.
    int doublenumber(int x)
    {
      return x + x;
    }
    
    int main()
    {
      using namespace std;
      int x;
      cin >> x;
      cout << x << endl;
      return 0;
    }
    //mainly copied from main.cpp of learncpp/1.3/cout-cin-endl-std_namespace/main.cpp
