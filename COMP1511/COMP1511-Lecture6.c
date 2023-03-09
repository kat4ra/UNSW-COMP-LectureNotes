#include <stdio.h>

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
/////////////////////////////// Main Function //////////////////////////////
////////////////////////////////////////////////////////////////////////////
int main(void) {

////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Arrays /////////////////////////////////
////////////////////////////////////////////////////////////////////////////
    boldRed();
    printf("Arrays");
    reset();

    printf("\tArrays are important data types that are a collection of variables of the same type.\n");
    printf("\tThis makes them different from structs, where the collection of variables can be different datatypes.\n");
    printf("\tThis is because each member of the array is indexed\n");
    printf("\tWe want to treat this collection as a single thing, where we can access and change each variable easily.\n\n");

    ////////////////////////////// Using Arrays /////////////////////////////
    int mon = 2;
    int tues = 3;
    int wedn = 3;
    int thurs = 7;
    int fri = 4;
    int sat = 7;
    int sun = 9;

    // What if we want to check if any of these are greater than 3?

    /*
    
    if (mon >= 3)
    {
        printf("more than 3");
    }
    
    */

    // Doing this 7 times is tedious, even more so if we want to compare a whole month, or YEAR (365 variables)

    // Instead, lets use an array:
    printf("\tFirst we need to declare our array with [square brackets] after our array name.\n");
    printf("\tThe number of members goes inside these [square brackets].\n");
    printf("\tThe data type that you want the array to use goes before the array name.\n\n");

    printf("\tWe can then declare the members just like other data types in {curly brackets}.\n");
    int ice_cream_eaten[7] = {2, 3, 3, 7, 4, 7, 9};

    // This is how each member is indexed:
    int ice_cream_index[7] = {0, 1, 2, 3, 4, 5, 6};

    printf("\tTo access the second member for tuesday, I need to reference it's index: [1]\n\n");

    printf("I had %d scoops on tuesday\n",ice_cream_eaten[1]);





    


    

    
    
}