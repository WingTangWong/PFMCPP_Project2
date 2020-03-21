#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 



   * Integer 
   * Character
   * Boolean
   * Floating Point
   * Double Floating Point
   * Void 
   * Wide Character



2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function

   
   * Done below in the function 




3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
  



4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
   
    // ====================================== 
    // WingTangWong's entries 
    // ====================================== 
    
    // Integers
    int    numberOfCars       = 32;
    int    numberOfSpareTires = 8192;
    int    numberOfBolts      = 16384;

    // Character
    char   letterOfLastName  = 'w';
    char   letterOfGender    = 'm';
    char   letterOfFailGrade = 'f';

    // Boolean
    bool   isItemBurning     = true;
    bool   isItemWet         = false;
    bool   isItemFull        = false;

    // Floating Point
    float  realPiValue     = 3.14159;
    float  realRepeatValue = 1.18181;   // (13.0/11.0) = 1.18181818181818181818
    float  realPercentage  = 0.158673;  // (1234/7777) = 0.15867301015815867301

    // Double Floating Point
    double longerPiValue     = 3.14159265358979323; 
    double longerRepeatValue = 1.18181818181818181; // (  13.0/  11.0)
    double longerPercentage  = 0.15867301015815867; // (1234.0/7777.0)

    // Ignore them since they are unused
    ignoreUnused(numberOfCars);
    ignoreUnused(numberOfSpareTires);
    ignoreUnused(numberOfBolts);
    ignoreUnused(letterOfLastName);
    ignoreUnused(letterOfGender);
    ignoreUnused(letterOfFailGrade);
    ignoreUnused(isItemBurning);
    ignoreUnused(isItemWet);
    ignoreUnused(isItemFull);
    ignoreUnused(realPiValue);
    ignoreUnused(realRepeatValue);
    ignoreUnused(realPercentage);
    ignoreUnused(longerPiValue);
    ignoreUnused(longerRepeatValue);
    ignoreUnused(longerPercentage);

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

/*
 2)
 */

/*
 3)
 */

/*
 4)
 */

/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    
    //2)
    
    //3)
    
    //4)
    
    //5)
    
    //6)
    
    //7)
    
    //8)
    
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
