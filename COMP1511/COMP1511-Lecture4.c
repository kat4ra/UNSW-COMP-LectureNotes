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

  //////////////////////////// Defining a Struct /////////////////////////////
  struct profile
  {
    char nickname [10];
    int age;
    int heightcm;
    int weightkg;
  };

int main(void) {
  
  ////////////////////////////////////////////////////////////////////////////
  //////////////////////////// Nested While Loops ////////////////////////////
  ////////////////////////////////////////////////////////////////////////////

  boldRed();
  printf("Nesting While Loops\n\n");
  reset();

  printf("While loops can be put inside one another\n");
  printf("Doing this will run the inside loop every time the outside loop is run\n");
  printf("This runs the inside loops a LOT of times\n");

  printf("Here is are some example of using nested while loops:\n\n");

  ///////////////////////////// Grid of Numbers //////////////////////////////
  int column = 0;

  while (column < 5)
  {
    int row = 0;
    int num = 1;
    while (row < 5)
    {
      printf("%d ", num);
      num ++;
      row ++;
    }
    printf("\n");
    column ++;
  }

  printf("\n");
  //////////////////////////// Pyramid of Numbers ////////////////////////////
  column = 0;
  int count = 1;

  while (column < 5)
  {
    int row = 0;
    int num = 1;
    while (row < count)
    {
      printf("%d ", num);
      num ++;
      row ++;
    }
    
    printf("\n");
    count ++;
    column ++;
  }
  
  printf("\n");
  ////////////////////////////////////////////////////////////////////////////
  //////////////////////////////// Structures ////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////

  boldRed();
  printf("Structures\n\n");
  reset();

  printf("A structure is a custom variable that contains variables itself\n");
  printf("In a way, it's a nested variable\n\n");

  printf("To use structs, we need to:\n");
  printf("\t 1. Define the struct\n");
  printf("\t 2. Declare a struct variable\n");
  printf("\t 3. Initialise the struct variable\n\n");


  //////////////////////////// Defining a Struct /////////////////////////////
  printf("We first define a struct outside of the the main function\n");
  printf("To do this, we use the keyword [struct], followed by the name of our structure\n");
  
  //This struct will be defined on [line 27]
  /* 
    struct profile
    {
      char nickname[10];
      int age;
      int heightcm;
      int weightkg;
    };
  */

  printf("Our structure, [profile] will be a 'template' for a person's profile\n");
  printf("Each person's profile will have information of their nickname, age, height and weight\n\n");


  //////////////////////////// Declaring a Struct ////////////////////////////
  printf("Then, we can declare the structure inside the main function\n");

  // Creating a profile for kevinHe with :
  // struct structureName variableName;
  struct profile kevinHe;

  printf("This creates a blank profile with the structure variable name: kevinHe\n");
  printf("The structure variable is like any other variable:\n");
  printf("[int] can hold a number\n");
  printf("[char] can hold a character\n");
  printf("[profile] can hold a nickname, age, height and weight\n\n");

  
  ////////////////////////// Initialising a Struct ///////////////////////////
  printf("Now to access the variables inside [kevinHe], we need to initialise each member:\n");

  // We access members by using the dot operator [.]:
  kevinHe.age = 17;
  kevinHe.heightcm = 183;
  kevinHe.weightkg = 70;
  
  // To access strings, we cant use the dot operator, since they are [arrays]
  // Instead, we can use the strcpy() function!

  strcpy(kevinHe.nickname, "kevin");

  // Now lets access these members the same way

  printf("%s is %d years old, %dcm tall and weighs %dkg.\n", 
  kevinHe.nickname, kevinHe.age, kevinHe.heightcm, kevinHe.weightkg
  );


  printf("\n");
  ////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////// Enums ///////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////

  boldRed();
  printf("Enumerations\n\n");
  reset();

  printf("Enumerations (Enums) are a set of related named constants\n");
  printf("These sets can be used automatically assign an integer to a each named member\n");
  printf("Then, later in your code when you want to use that integer, you can instead use the name,\n");
  printf("Instead of a seemingly arbitrary integer.\n");

  printf("This makes your code easier to read, edit and organise.\n");

  //////////////////////////// Defining an Enum /////////////////////////////



}