#include <stdio.h>
#include <string.h>

////////////////////////////////////////////////////////////////////////////
////////////////////////////// Text Formatting /////////////////////////////
////////////////////////////////////////////////////////////////////////////
        
void boldRed () {
printf("\033[1;31m");
}

void boldBlue () {
printf("\033[1;34m");
}

void boldGreen () {
printf("\033[1;32m");
}

void boldCyan () {
printf("\033[1;36m");
}

void reset () {
printf("\033[0m");
}

////////////////////////////////////////////////////////////////////////////
///////////////////////////// Example Functions ////////////////////////////
////////////////////////////////////////////////////////////////////////////

/* Our function is defined by a data type, [int]
This data type matches our output data type, 
Since the function will spit out an integer back to the main function,
We will use the [int] keyword.
*/

int addingMachine(int number1, int number2) {
        //Our inputs go in (brackets) after the name of our function
        //You can think of these as assigning number1 and number2 to the 


        //We put our code in the {curly brackets}
        //Here we can only use variables accessible to the function which are:
        // - constants
        // - inputs
        int output = number1 + number2;


        //And our output is sent back to the main function with return:
        return output;
        
}



////////////////////////////////////////////////////////////////////////////
/////////////////////////////// Main Function //////////////////////////////
////////////////////////////////////////////////////////////////////////////

int main(void) {

        ////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////// Functions ////////////////////////////////
        ////////////////////////////////////////////////////////////////////////////
        boldRed();
        printf("Functions\n\n");
        reset();

        printf("Functions are a way to break up our code into smaller 'blocks'\n");
        printf("Each function performs an operation when it is called\n\n");

        printf("You can think of functions as a little machine in your code that can take in information, ");
        boldGreen(); printf("inputs,\n"); reset();
        printf("And spit out something else after, "); 
        boldGreen(); printf("outputs.\n\n"); reset();

        printf("We can call our function; use this machine anywhere we want in our code\n");
        printf("We can also call our function as many times as we want, and put in different information every time.\n\n");
        printf("After the function is used (or called), we will return to the next line after the function call.\n");

        ////////////////////////////////// Example /////////////////////////////////
        printf("We write functions outside of the main function, usually in the lines above the main function,\n");
        printf("This space is referred to as the "); 
        boldBlue(); printf("header.\n"); reset();

        //The example function will be written on [line 31]
        printf("Lets make an example function that adds two numbers:\n");
        boldCyan(); printf("Pick two numbers:");
        int input1;
        int input2;
        scanf("%d %d", &input1, &input2);

        //Calling the function
        //We can only call a function if it has been declared in the header(or footer)

        //To call this function, we write the function name
                // addingMachine();

        //And send our inputs in the (brackets)
                // addingMachine(inputs);

        //We can separate multiple inputs with commas
                // addingMachine(input1, input2);

        //Since our function is an [int], we treat the function name as an integer:
        int sum = addingMachine(input1, input2);
        //Here, [sum] will be assigned to whatever the addingMachine returns
        reset();

        printf("\nThe sum is %d\n\n", sum);
        
        ////////////////////////////////////////////////////////////////////////////
        ///////////////////////////// Reusing Functions ////////////////////////////
        ////////////////////////////////////////////////////////////////////////////

        printf("Earlier I said that we can use functions as many times as we can\n");
        printf("This means that we can use the same lines of code without writing them again!\n");

        printf("Lets use this code to make a fibonacci sequence: \n");

        ////////////////////////////////// Example /////////////////////////////////

        int count = 0;
        int currentNumber = 1;
        int previousNumber = 1;

        printf("1 1 ");
        while (count < 10)
        {
                int sum = addingMachine(currentNumber, previousNumber);
                previousNumber = currentNumber;
                currentNumber = sum;

                printf("%d ", currentNumber);
                count ++;
        }
        
        ////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////// Procedures ///////////////////////////////
        ////////////////////////////////////////////////////////////////////////////
        boldRed();
        printf("\n\nProcedures\n\n");
        reset();

        printf("Procedures are similar to functions, as they can both be called anywhere and as many times are you want,\n");
        printf("However, procedures does not have a return value\n");
        printf("Although it CAN take one or more inputs, just like functions.\n\n");

        printf("The text formatting tools used in this file are just procedures.\n");

        printf("To use procedures, use the [void] keyword instead of a datatype.\n");


}