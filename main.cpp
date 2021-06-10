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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 

int
char
bool
float
double
void

 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int count = 0;
    int dots = 5;
    int cities = 3;
    char alpha = 'b';
    char grade = 'C';
    char rating = 'A';
    bool lieDetectorTest = true;
    bool containsLead = false;
    bool underground = true;
    float firstNum = 23.3f;
    float anotherNum = 0.002f;
    float difference = 1.2323f;
    double smallNum = 3E-6;
    double timeRemain = 255.23;
    double halfTime = .5;

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(count, dots, cities, alpha, grade, rating, lieDetectorTest, containsLead, underground, firstNum, anotherNum, difference, smallNum, timeRemain, halfTime);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value

{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool soundPlaying(double volume, int onSwitch=0)
{
    ignoreUnused(volume, onSwitch);
    return {};
}
/*
 2)
 */
void getWeather(double temp, bool detectRain, char climateZone)
{
    ignoreUnused(temp, detectRain, climateZone);

}
/*
 3)
 */
void keyboardType(int keys = 88, bool electric = true)
{
    ignoreUnused(keys, electric);

}
/*
 4)
 */
int ageFinder(int yourAge, int currentYear)
{
    ignoreUnused(yourAge, currentYear);
    return {};
}
/*
 5)
 */

char restaurantRating(char kitchen, char diningRoom, char bathroom, char failingGrade = 'D')
{
    ignoreUnused(kitchen, diningRoom, bathroom, failingGrade);
    return {};
}


/*
 6)
 */

void radarDectector(double currentSpeed, int speedLimit, int specialRestrictions = 3, bool authorized = true)
{
    ignoreUnused(currentSpeed, speedLimit, specialRestrictions, authorized);
}

/*
 7)
 */

double voltageDrop(double current, double resistanceA, double resistanceB, double powerFactor)
{
    ignoreUnused(current, resistanceA, resistanceB,powerFactor);
    return {};

}
/*
 8)
 */

bool catDetector(bool ownsCat = false)
{
    ignoreUnused(ownsCat);
    return {};
}

/*
 9)
 */

bool butterSpoiled(float fridgeTemp = 35, int butterAge = 15, bool salted = false)
{
    ignoreUnused(fridgeTemp, butterAge, salted);
    return {};

}


/*
 10)
 */
void make3D (double length, double width, double height, int textureType)
{
    ignoreUnused(length, width, height, textureType);

}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto soundPlay = soundPlaying(.96);

    //2)

    getWeather(85, true, 'B');

    //3)

    keyboardType();
    
    //4)
    
    auto age = ageFinder(40, 1982);
    //5)

    auto score = restaurantRating('A', 'B', 'D');

    
    //6)

    radarDectector(66, 65, 3, false);
    
    //7)

    auto drop = voltageDrop(.01, 3, 1, 9);
    //8)
    
    auto cat = catDetector(false);

    //9)

   auto butterState = butterSpoiled();
    
    //10)
    
    make3D(23.526, 23.0002, 5.5, 6);

    
    ignoreUnused(carRented, soundPlay, age, score, drop, cat, butterState);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
