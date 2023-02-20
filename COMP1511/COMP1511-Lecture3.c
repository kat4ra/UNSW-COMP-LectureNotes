#include <stdio.h>
#include <math.h>

//Text formatting procedures
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

//Functions for example 1 (digit checking/even or odd)
  int inputNumber() {
    boldCyan();
    printf("Input a number from 1-100:\n");
    reset();
    int numberExample;
    scanf("%d",&numberExample);

    return numberExample;
  }

  int evenNumberCheck(int number) {

    if (number % 2 == 0)
    {
      printf("Your number is even\n");
      return 1;
    }
    
    else
    {
      printf("Your number is odd\n");
      return 0;
    }
    
  }

  //Functions for example 2(lower case to upper case)
  char letterInput() 
{
  char letter;
  scanf("%c", &letter);
  
  return letter;
}

//Lecture 3
int main(void) {

  //If statements
  boldRed();
  printf("If statements\n\n");
  reset();

  //If statements are fundamental to making responsive code
  //We can use [if] to have differnet outcomes based on an initial condition
  printf("Decision problems are problems with a yes or no answer\n");
  printf("We can use [if] statements to answer desicion problems\n");
  boldCyan();
  printf("Are you ready to continue? (y/n)\n");
  reset();
  //Request the use to answer, yes or no
  char userAnswer;
  scanf("%c", &userAnswer);

  //We write our [if] statements like this:
  //In (), we write our conditions
  //If whatever is in here is true, the following code in {} will run
  if (userAnswer == 'y')
  {
    //If the userAnswer is y(yes), then:
    printf("Okay, lets continue!\n");

  }
  
  //If the condition false, we have 3 options:
  //We can add another condition with [else if]:
  else if (userAnswer == 'n')
  {
    //If they userAnswer is n(no), then:
    //Exit the program
    return 0;

  }
  
  //If the condition doesnt fit in our [if(condition)] or our [else if(condition)], then we can write:
  else 
  {
    printf("Please input a y or n\n");
    return 0;

  }

  //Normally, after any of these [if], [else if] ,or [else] statements return true and the code{} under them is executed,
  //The next line of code will be run is the first line that is not an [else if] or [else] statement.
  printf("If the (condition) inside the brackets is a TRUE statement,\n");
  printf("The code in the {curly brackets} will be executed\n");
  printf("Then all associated [else if] and [else] statements will be skipped.\n\n");
  //These lines [printf] lines will be run if the user types y
  //Otherwise, the program will finish with [return 0;]

  //In the above [if] statement, we used the == operator
  printf("What can we put in the (brackets?)\n");
  //Here is a list of some things we can use in the brackets:

  boldGreen();
  printf("<");
  reset();
  printf("\t less than");

    if (5 < 10)
    {
      //true
      printf("\t\t 5 is less than 10\n\n");
    }
  
  boldGreen();
  printf(">");
  reset();
  printf("\t greater than\n\n");
    if (5 > 10)
    {
      //false
      printf("\t 5 is greater than 10\n\n");
    }
  
  boldGreen();
  printf("<=");
  reset();
  printf("\t less than or equal to");
    if (5 <= 5)
    {
      //true
      printf("\t 5 is less than or equal to 5\n\n");
    }
    
  boldGreen();
  printf(">=");
  reset();
  printf("\t greater than or equal to");
    if (10 >= 5)
    {
      //true
      printf("\t 10 is greater than or equal to 5\n\n");
    }
    
  boldGreen();
  printf("==");
  reset();
  printf("\t equals\n\n");
    if (5 == 10)
    {
      //false
      printf("\t 5 is equal to 10\n\n");
    }
    
  boldGreen();
  printf("!=");
  reset();
  printf("\t not equals to");
    if (10 != 5)
    {
      //true
      printf("\t 10 is not equal to 5\n");
    }
    
  //Here, not every if statement is true
  //Hence some [printf] statements won't be printed
  //Try changing some of the (conditions) so that they will all be printed!

  //You can use these relational operators on variables AND numbers
  printf("These terms are called ");
  boldBlue();
  printf("Relational Operators\n\n");
  reset();

  //What if I have more than one condition?
  printf("We can also use the && operator to have more than one (condition) for our [if] statement.\n");
  printf("If either (condition) needs to satisfied, then we use the || operator.\n");
  //&& means AND and || means OR
  printf("The | symbol is usually next to ], or above the ENTER key.\n\n");

  //Let's try to include some user input this time
  printf("Here are some examples for the uses of the && and || operators:\n\n");


  //Silly number guessing game
  int number = 23;
  int guess1;
  int guess2;
  boldCyan();
  printf("Guess a number:\n");
  scanf("%d", &guess1);
  printf("Guess another number:\n");
  scanf("%d", &guess2);
  reset();

    if (guess1 == number && guess2 == number)
    {
      printf("Wow confident aren't you?\n\n");
    }

    else if (guess1 == number || guess2 == number)
    {
      printf("Your first guess OR your second guess was the right number!\n\n");
    }
    
    else
    {
      printf("You guessed the wrong number ;-;\n\n");
    }
    
  //There is also the ! operator, which we can put in front of our !(condition)
  //! means NOT, so if the opposite of our (condition) is true, then the {code} will run
  
  printf("Here is a demonstration for the ! (NOT) operator:\n");
  printf("Is 12 greater than or equal to 10?\n");
  //When using !, make sure to use 2 pairs of ()
  if (!(12 >= 10))
  {
    printf("12 isn't greater than or equal to 10\n");
  }

  else
  {
    printf("12 is greater than or equal to 10\n\n");
  }
  

  //While loops

  boldRed();
  printf("While Loops\n\n");
  reset();

  //C executes code in order from the top of the file to bottom
  //What if we want to execute our code more than once?
  printf("What if we want to execute our code more than once without copying and pasting?\n");

  //There are many different situations where copying and psating the same piece of code is not feasable
  //Instead, we can use loops with [while]
  printf("The keyword [while()] executes the {code} based on a (condition) that you can assign\n");
  printf("These loops can be controlled in 3 different ways:\n");

    boldGreen();
    printf("\tCount loops\n");
    printf("\tSentinel loops\n");
    printf("\tConditional loops\n");
    reset();

  //While loops follow a similar syntax to if statments
  //We can make an infinite loop if the (condition) NEVER changes
  boldCyan();
  printf("<>< forever? (y/n)\n");
  reset();
  char forever;
  //Make sure you want to print fishes forever
  scanf("%c",&forever);
  forever = getchar();

  //If they typed y for yes:
  if (forever == 'y')
  {
      while (1 == 1)
      //As long as the (condition) inside the brackets is TRUE,
      {
      //print a fish forever and ever..
      printf("<>< ");
      }
  //The {code} inside the curly brackets will continue to execute
  }

  //Count loops
  boldBlue();
  printf("\nCount Loops\n");
  reset();

  //Count loops use a variable to control how many times a loop runs
  printf("Let's test count loops with icecream!\n");
  int count = 0;
  int totalScoops = 0;
  printf("Our loop will stop once the [count] reaches 5\n");

  while (count != 5)
  {
    boldCyan();
    printf("How many icecream scoops do you want?\n");
    reset();

    int scoops = 0;
    scanf("%d",&scoops);
    getchar();

    totalScoops = totalScoops + scoops;

    count ++;

  }
  printf("Enjoy your %d icecreams\n\n", totalScoops);


  //Sentinel loops
  boldBlue();
  printf("Sentinel Loops\n");
  reset();

  //Sentinel loops use a variable outside the loop called the sentinel
  int sentinel = 0;
  //This variable will be changed somewhere inside the loop in order to 'escape'
  printf("This loops will stop once you want '0' more icecreams\n");
  
  totalScoops = 0;
  while (sentinel == 0 )
  {
    int scoops = 0;

    boldCyan();
    printf("How many scoops of icecream do you want?\n");
    reset();

    scanf("%d",&scoops);
    getchar();

    if (scoops == 0)
    {
      printf("Enjoy your %d icecreams :)\n\n", totalScoops);
      //Update the sentinel
      sentinel = 1;
    }
    
    else
    {
      //Counter for total amount of scoops
      totalScoops = totalScoops + scoops;
    }
    
  }
  
  //Conditional loops use a condition to decide how many times to repeat the loop
  boldBlue();
  printf("Conditional Loops\n");
  reset();

  //The condition is usually stated in the (brackets) of the while loop
  printf("This loop will stop once you have over 100 icecream\n");
  int sum = 0;
  while (sum <= 100)
  {
    boldCyan();
    printf("How many scoops of icecream do you want?\n");
    reset();

    int scoops = 0;
    scanf("%d",&scoops);
    getchar();

    sum = sum + scoops;
  }

  printf("Enjoy your %d icecreams!\n\n", sum);

  //Here are some examples where if statements, logical operators and while loops can be used!
  //Functions [inputNumber] and evenNumberCheck are at the top of the file
  boldRed();
  printf("\nExamples\n\n");
  reset();

  //Example of a Sentinel Loop:
  int complete = 0;
  //The sentinel^^

  while (complete == 0) {

    int numberExample = inputNumber();

    if (numberExample > 100) {

      printf("Please make sure the number is between 1 and 100\n");
      continue;

    }

    else if (numberExample <= 0) {

      printf("Please make sure the number is between 1 and 100\n");
      continue;

    }

    else {
      if (numberExample / 10 < 1) {

        printf("Your number has 1 digit\n");
        evenNumberCheck(numberExample);
        //updating the sentinel
        complete ++;

      }

      else if (numberExample / 10 < 10 && numberExample / 10 >= 1) {

        printf("Your number has 2 digits\n");
        evenNumberCheck(numberExample);
        //updating the sentinel
        complete ++;

      }
      else {

        printf("Your number has 3 digits\n");
        evenNumberCheck(numberExample);
        //updating the sentinel
        complete ++;

      }
    }
  }

  //Lower case to Upper case
  printf("\nAnother example with while loops and if statements\n");

  boldCyan();
  printf("Input a letter:\n");
  reset();

  while (1==1)
  {
    char letter = letterInput();
  
    if (letter >= 'A' && letter <= 'Z')
    {
      printf("Your letter is upper case\n");
      letter = letter + ('a' - 'A');
      printf("The new letter is %c\n", letter);
      break;
    }

    else if (letter >= 'a' && letter <= 'z') 
    {
      printf("Your letter is lower case\n");
      letter = letter - ('a' - 'A');
      printf("The new letter is %c\n", letter);
      break;
    }

    else
    {
      printf("Please input a letter\n");
      continue;

    }
  }

}