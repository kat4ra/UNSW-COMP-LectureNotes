#include <math.h>
#include <stdio.h>

//Constants
#define MAX_VALUE 6

//Text formatting procedures
void boldRed () {
  printf("\033[1;31m");
}

void boldPurple () {
  printf("\033[1;35m");
}

void boldGreen () {
  printf("\033[1;32m");
}

void boldBlue () {
  printf("\033[1;34m");
}

void reset () {
  printf("\033[0m");
}

//Procedure
void procedure(void) {

  printf("This block of code performs its task without returning a value\n\n");
  
}

//Function
int function() {
  return 1 + 2;
  
}

int main(void) {

  //Variables in C

  boldRed();
  printf("Variables\n\n");
  reset();

  //What are variables?
  printf("In C, you can create variables that store values in memory\n");
  printf("These variables can be accessed later in your code, and come in different types called 'data types'\n\n");

  //Types of variables (Data Types)


  //The first data type is the integer; a whole number
  printf("The first data type we will look at is the ");
  boldPurple();
  printf("integer\n");
  reset();

  //To create variables in C, we type our keyword for integers (int), followed by the name of our variable.
  int integer;
  printf("The integer consists of 4 bytes of memory, or 32 bits.\n");
  printf("Hence, the value of this integer cannot be greater than 2^31-1 or less than -2^31\n\n");

  //We can assign a value to our integer like this:
  integer = 17;
  //In order to print this integer using "printf", we must use %d where we want our integer
  printf("The integer is %d\n\n", integer);
  //Notice we need to refer to which integer we are talking about after the "double quotes"


  //The next data type is the character; a single ascii character.
  printf("The next data type is the ");
  boldGreen();
  printf("character\n");
  reset();

  //Characters use the keyword (char)
  //We can also assign values to variables in one line like this:
  char character = 'g';
  //Notice the single character has single quotes around it
  printf("The character takes up 1 byte of memory, or 8 bits.\n");
  printf("This correlates to the 128 or 2^8 different ascii values availible\n\n");

  //To print the character, we use %c in place of our character
  printf("The character is %c\n", character);
  //We can also print the ascii value of this character if we use %d instead:
  printf("The ascii value of %c is %d\n\n", character, character);


  //The third data type we will look at is the double (double); a floating point number
  printf("The third data type is the ");
  boldBlue();
  printf("double\n");
  reset();

  //Doubles are used where decimals are required, particularly in maths
  double floatingPoint = 0.1;
  //A floating point number refers to a number that has a decimal point
  printf("Doubles take up 8 bytes or 64 bits of memory\n");
  printf("This is twice that of an integer; hence the name 'double'\n");
  //To print a double we use %lf in place of our number.
  printf("The floating point is %lf\n",floatingPoint);
  //You'll notice that the terminal outputs the value to a lot of decimal points
  //To print the double to a specific amount of decimal spaces we can write:
  printf("The floating point is also %0.1lf or %0.2lf\n\n",floatingPoint, floatingPoint);
  //Now instead of 0.100000 the output is 0.1 and 0.10

  //Let's do some maths
  boldRed();
  printf("Maths\n\n");
  reset();

  //In C, we can perform mathematical operations on variables and numbers
  printf("We can perform arithmetic math operations in C just like in algebra\n\n");
  //One way to do this is to add two variables
  int x = 2;
  int y = 3;
  int answer = x + y;
  printf("2 + 3 = %d\n", answer);
  //Remember the answer is an integer, so we use %d
  //We can also do math like this
  answer = 3 - 2;
  printf("3 - 2 = %d\n", answer);
  //Or like this
  printf("3 * 2 = %d\n", x * y);

  //Let's try to do math with doubles as well
  double floatingPoint2 = 0.2;
  printf("0.2 / 0.1 = %lf\n\n", floatingPoint + floatingPoint2);

  //Basic user inputs


  boldRed();
  printf("Scanf and User inputs\n\n");
  reset();

  //The scanf keyword waits for the user to input something into the command line
  printf("Scanf allows us read something inputted from the user\n");
  printf("Input an integer:\n");
  //The scanf function is formatted like this
  int userInput;
  scanf("%d", &userInput);
  //This input can be stored in a variable through a pointer
  //The '&' symbol points to the memory adress of [userInput], and must be used in scanf
  printf("Your number was %d\n", userInput);
  printf("The square of your number was %d\n\n", userInput * userInput);
  
  //Constants


  boldRed();
  printf("Constants\n\n");
  reset();

  //Constants are like variables, except they cannot be changed
  printf("Constants are similar to variables, except that they cannot be changed later in the code.\n\n");
  //In this case, line 5 contains the constant (MAX_VALUE)
  printf("The maximum value that a dice can roll is %d\n", MAX_VALUE);
  printf("Constants are also referred to as 'literals' in C\n");
  printf("Using constants instead of variables allows the compiler to perform optimisations,\n");
  printf("And prevents you from accidentally changing the value\n");

  //Another way to define a constant is using the keyword [const] before initialising another data type:
  const int MAX_MEMORY_ALLOC = 1000000;
  //It is best practice to use all caps when defining constants
  printf("The maximum memory allocated is %d\n\n", MAX_MEMORY_ALLOC);


  //What's the difference between procedures and functions?


  boldRed();
  printf("Procedures and Functions\n\n");
  reset();

  //Procedures perform tasks without returning values
  printf("A procedure refers to a block of code that executes a task\n");
  //This is a procedure
  procedure();

  //Functions perform tasks and return one or more values
  printf("A function refers to a block of code that returns one or more values, (usually executes a task as well):\n\n");
  //This is a function
  printf("1 + 2 = ");
  printf("%d\n", function());
  
  //I used procedures to change the color and format of the text in this project
  //Lines 7-26 were used to format some text in this program :)
  
  //You'll notice that I don't need to put "return 0;" at the end of this
  //Putting [void] in the main function parameters tells the computer that the main function is a procedure. 

}