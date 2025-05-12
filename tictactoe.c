#include <stdio.h>                                                                                              // Library for int main()
#include <stdlib.h>                                                                                             // Library for rand() and srand() functions
#include <string.h>                                                                                             // Library used for string functions
#include <time.h>                                                                                               // Library used for time() function
#include <math.h>                                                                                               // Library used for math functions


/*----GOALS----*/
/*
1. Build a tic tac toe game
2. See if I can fit the tic tac toe grid inside of a character string array
3. Build a function that will take in the initial tic tac to grid, the user's play and then the output of the tic tac toe grid after the play
4. Maybe create functions for certain index array positions for plays?
5. Maybe create these play functions for both X's and O's based on the index array position
6. Create a print statemewnt that will how the top left X and print it (test to make sure it is printing correctly)
7. Try to place the top left x ar the corresponding array position of the grid
8. I need to create cases for each X and O and iterate through them and set them equal to the corresponding array index of the grid then output the grid for the plays
9. Create and X for each column and row and create a diamond for each column and row
10. Create variables for columns and rows and X's and O's and scan them in so I know what the user chooses
11. I might need to add three more parameters inside of my function for choice, column and row then to make the play and iterate based on a switch or case or if/else
*/


/*----Step 1: Checking to see if I can draw a tic tac toe grid inside of just one character string array----*/

void grid(char gridIN[], char playA[], char playB[], char gridOUT[])                            // Creating a void return type function that takes in 3 parameters; the first one is the tic tac to grid input, the second is the play and the third is the output ot the grid after the play
{
//      printf("TicTacToe Grid!\n");
//      char gridIN[] = "\n\n     |     |     \n     |     |     \n-----|-----|-----\n     |     |     \n     |     |     \n-----|-----|-----\n     |     |     \n     |     |     \n\n";                       // Creating the grid and storing it inside of a char string array

/*--Creating a for loop to interate through the play so I can set it equal to the current index of the grid string array---*/


        for
                (
                        int i = 0, j = 5;                               // Declaring 2 iterable variables, the first one is for the play string array and it is set at zero to ensure that it iterates all the way through. The second one is for the grid array tryig to set the starting position
                        playA[i] != '\0';               // As long as the current index array is not equal to the null terminator for the play string array then exectute the code and iterate accordingly
                        i++, j++                                                // As long as all conditions are met then iterate according after the code has been executed and add 1 to i and 1 to j.. so it should start at gridIN[16] = play[0] .. gridIN[17] = play[1]..gridIN[18] = play[2].. until the index position of play reaches the null terminator
                )
        {
                gridIN[j] = playA[i];           // Setting the value of grid at the current index position which starts at 16 equalled to the index position of the play string array which will start at zero and they will both increment so I can fit the X in the top left corner
        }

/*---Creating a for loop to iterate through the second part of the x since the new line was causing issues----*/

for
        (
                int i = 0, j = 29;                      // Declaring 2 iterable variables. i will be used to iterate through playB character string array and j will be used to iterate through the gridIN character string array
                playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                i++, j++                                        // As long as all conditions are met then add 1 to i and 1 to j
        )
        {
                gridIN[j] = playB[i];           // Setting the value of the grid current index position which will start at 17 in this case and set it equal to the first index position of the playB character string array
        }


        printf("%s", gridIN);                                                                                   // Printing the grid inside of the function

/*--Creating a for loop to iterate through the gridIN string array after the top left X play string array has been added to it--*/

        for(int i = 0; gridIN[i] != '\0'; i++)                                                  // Creating a for loop to iterate through the grid to set the grid out equal to it but also feeding in the X or play in this case and the output grid should have the play
        {
                gridOUT[i] = gridIN[i];                                                                         // Ensuring that the input grid is copied to the output grid so we can see what the play is.. Adding the top left X
        }
                // update the corresponding index of grid2 string array equivalent to the string length of the the array that has the X's or O's
}




/*----Step 2: Creating a function to test out the Diamond's----I need to be able to replicate all Xs and O's based on the index position of the string array at match it to the grid then iterate through the grid and do if x mid then do x mid, if o top right then o top right..*/

void gridDs(char gridIN[], char choice, int column, int row, char playA[], char playB[], char gridOUT[])                                                        // Declaring a void return type function that takes in 4 character string array parameters; grid that goes in, the top part of the O, the bottom part of the O and then the output after the play has been added to the grid
{

/*---A: Top Left Diamond----*/
/*---Creating a for loop to iterate through the second part of the x since the new line was causing issues----*/

/*--Creating a for loop to interate through the play so I can set it equal to the current index of the grid string array---*/
if(choice == 'd' && column == 1 && row == 1)                                    // Checking to see if the choice is for diamond and the column is the first column and the row is the first row for the top left corner square in the grid
{

        for
                (
                        int i = 0, j = 5;                               // Declaring 2 iterable variables, the first one is for the play string array and it is set at zero to ensure that it iterates all the way through. The second one is for the grid array tryig to set the starting position
                        playA[i] != '\0';               // As long as the current index array is not equal to the null terminator for the play string array then exectute the code and iterate accordingly
                        i++, j++                                                // As long as all conditions are met then iterate according after the code has been executed and add 1 to i and 1 to j.. so it should start at gridIN[16] = play[0] .. gridIN[17] = play[1]..gridIN[18] = play[2].. until the index position of play reaches the null terminator
                )
        {
                gridIN[j] = playA[i];           // Setting the value of grid at the current index position which starts at 16 equalled to the index position of the play string array which will start at zero and they will both increment so I can fit the X in the top left corner
        }

/*---Creating a for loop to iterate through the second part of the x since the new line was causing issues----*/

for
        (
                int i = 0, j = 29;                      // Declaring 2 iterable variables. i will be used to iterate through playB character string array and j will be used to iterate through the gridIN character string array
                playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                i++, j++                                        // As long as all conditions are met then add 1 to i and 1 to j
        )
        {
                gridIN[j] = playB[i];           // Setting the value of the grid current index position which will start at 17 in this case and set it equal to the first index position of the playB character string array
        }
}


/*----B: Top Middle Diamond----*/


/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 2 && row == 1)                            // Checking to see if the user selected diamonds and and the second column and first row to access the top middle square inside of the grid
{

        for
                (
                        int i = 0, j = 13;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 7 initially, it will increment like this.. i = 1 and j = 8, i = 2 and j = 9, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/
        for
                (
                        int i = 0, j = 37;                      // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }
}


/*----C. Top Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 3 && row == 1)                            // Checking to see if the user selected diamonds and and the third column and first row to access the top right square inside of the grid
{

        for
                (
                        int i = 0, j = 21;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 45;                      // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

/*----D. Middle Left Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 1 && row == 2)                            // Checking to see if the user selected diamonds and and the first column and first row to access the left middle square inside of the grid
{

        for
                (
                        int i = 0, j = 77;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 101;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----E. Middle Middle Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/

if(choice == 'd' && column == 2 && row == 2)                            // Checking to see if the user selected diamonds and and the second column and second row to access the middle middle square inside of the grid
{
        for
                (
                        int i = 0, j = 85;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 109;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

/*----F. Middle Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 3 && row == 2)                            // Checking to see if the user selected diamonds and and the third column and second row to access the right middle square inside of the grid
{

        for
                (
                        int i = 0, j = 93;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 117;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----G. Bottom Left Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 1 && row == 3)                            // Checking to see if the user selected diamonds and and the first column and third row to access the bottom left square inside of the grid
{

        for
                (
                        int i = 0, j = 149;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 173;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----H. Bottom Middle Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 2 && row == 3)                            // Checking to see if the user selected diamonds and and the second column and third row to access the bottom middle square inside of the grid
{

        for
                (
                        int i = 0, j = 157;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 181;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }
}
/*----I. Bottom Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'd' && column == 3 && row == 3)                            // Checking to see if the user selected diamonds and and the third column and third row to access the bottom right square inside of the grid
{

        for
                (
                        int i = 0, j = 165;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 189;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

        printf("The gridIN[] string after both plays have been added is: %s\n", gridIN);                // Printing the gridIN string array after adding in the top half of the O and the bottom half of the O to see where it printed

/*---Creating a for loop to iterate through the gridIN string array so I can set it equalled to the gridOUT string array so I can print the grid after the play has been registered to it---*/

        for(int i = 0; gridIN[i] != '\0'; i++)                  // Creating an integer iterable variale named i and intializing it to zero to match the first index of the gridIN string array and saying that as long as the index of the string array is not equal to the null terminator, then execute the code and iterate accordinlgy
        {
                gridOUT[i] = gridIN[i];                                         // Setting the current index of the gridOUT string array equalled to the corresponding index of the gridIN string array so we can copy it after the play has been executed
        }
}




/*----Step 3: Creating a function to test out the X's----I need to be able to replicate all Xs and O's based on the index position of the string array at match it to the grid then iterate through the grid and do if x mid then do x mid, if o top right then o top right..*/

void gridXs(char gridIN[], char choice, int column, int row, char playA[], char playB[], char gridOUT[])                                                        // Declaring a void return type function that takes in 4 character string array parameters; grid that goes in, the top part of the O, the bottom part of the O and then the output after the play has been added to the grid
{

/*---A: Top Left Diamond----*/
/*---Creating a for loop to iterate through the second part of the x since the new line was causing issues----*/

/*--Creating a for loop to interate through the play so I can set it equal to the current index of the grid string array---*/
if(choice == 'x' && column == 1 && row == 1)                                    // Checking to see if the choice is for diamond and the column is the first column and the row is the first row for the top left corner square in the grid
{

        for
                (
                        int i = 0, j = 5;                               // Declaring 2 iterable variables, the first one is for the play string array and it is set at zero to ensure that it iterates all the way through. The second one is for the grid array tryig to set the starting position
                        playA[i] != '\0';               // As long as the current index array is not equal to the null terminator for the play string array then exectute the code and iterate accordingly
                        i++, j++                                                // As long as all conditions are met then iterate according after the code has been executed and add 1 to i and 1 to j.. so it should start at gridIN[16] = play[0] .. gridIN[17] = play[1]..gridIN[18] = play[2].. until the index position of play reaches the null terminator
                )
        {
                gridIN[j] = playA[i];           // Setting the value of grid at the current index position which starts at 16 equalled to the index position of the play string array which will start at zero and they will both increment so I can fit the X in the top left corner
        }

/*---Creating a for loop to iterate through the second part of the x since the new line was causing issues----*/

for
        (
                int i = 0, j = 29;                      // Declaring 2 iterable variables. i will be used to iterate through playB character string array and j will be used to iterate through the gridIN character string array
                playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                i++, j++                                        // As long as all conditions are met then add 1 to i and 1 to j
        )
        {
                gridIN[j] = playB[i];           // Setting the value of the grid current index position which will start at 17 in this case and set it equal to the first index position of the playB character string array
        }
}


/*----B: Top Middle Diamond----*/


/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 2 && row == 1)                            // Checking to see if the user selected diamonds and and the second column and first row to access the top middle square inside of the grid
{

        for
                (
                        int i = 0, j = 13;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 7 initially, it will increment like this.. i = 1 and j = 8, i = 2 and j = 9, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/
        for
                (
                        int i = 0, j = 37;                      // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }
}


/*----C. Top Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 3 && row == 1)                            // Checking to see if the user selected diamonds and and the third column and first row to access the top right square inside of the grid
{

        for
                (
                        int i = 0, j = 21;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 45;                      // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

/*----D. Middle Left Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 1 && row == 2)                            // Checking to see if the user selected diamonds and and the first column and first row to access the left middle square inside of the grid
{

        for
                (
                        int i = 0, j = 77;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 101;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----E. Middle Middle Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/

if(choice == 'x' && column == 2 && row == 2)                            // Checking to see if the user selected diamonds and and the second column and second row to access the middle middle square inside of the grid
{
        for
                (
                        int i = 0, j = 85;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 109;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

/*----F. Middle Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 3 && row == 2)                            // Checking to see if the user selected diamonds and and the third column and second row to access the right middle square inside of the grid
{

        for
                (
                        int i = 0, j = 93;                      // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 117;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----G. Bottom Left Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 1 && row == 3)                            // Checking to see if the user selected diamonds and and the first column and third row to access the bottom left square inside of the grid
{

        for
                (
                        int i = 0, j = 149;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 173;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}
/*----H. Bottom Middle Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 2 && row == 3)                            // Checking to see if the user selected diamonds and and the second column and third row to access the bottom middle square inside of the grid
{

        for

                (
                        int i = 0, j = 157;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 181;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }
}
/*----I. Bottom Right Diamond----*/
/*----Creating a for loop to iterate through the playA string array so I can set it equal to the correct array of the grid for the play. In this case we are aiming for the top middle section----*/
if(choice == 'x' && column == 3 && row == 3)                            // Checking to see if the user selected diamonds and and the third column and third row to access the bottom right square inside of the grid
{

        for
                (
                        int i = 0, j = 165;                     // Declaring two integer iterable variables; i is set at zero which will be used to iterate through the PlayA string array and j is set to 7 to try and play the first part of the play at the correct position inside of the grid string array
                        playA[i] != '\0';                       // As long as the current index of the playA array is not equal to the null terminator index then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, add 1 to i and 1 to j. Since i = 0 and j = 18 initially, it will increment like this.. i = 1 and j = 19, i = 2 and j = 20, etc until we reach the null terminator index of the playA string array
                )
                {
                        gridIN[j] = playA[i];           // Setting the grid at the intialized index equaled to the first index of the playA string array to try and get the correct position of the top of the O to the middle top section of the grid
                }

/*----Creating another for loop to iterate through the playB string array so I can set the characters inside of that string equaled to the correct index of the grid to align with the top of the O in the top middle section of the grid----*/

        for
                (
                        int i = 0, j = 189;                     // Declaring two integer iterable variables: i starts at index zero and will be used to iterate through the playB character string array and j starts at index 42 which will be used to interate through the gridOs string array
                        playB[i] != '\0';                       // As long as the current index of the playB character string array is not equal to the null terminator then execute the code and iterate accordingly
                        i++, j++                                        // As long as all criteria are met, after executing the code, add 1 to i and add1 to j. Since initially i = 0 and j = 42, after the first iteration, i = 1 and j = 43 and so on
                )
                {
                        gridIN[j] = playB[i];           // Setting the current grid index set to the first index of the playB character string array to try match up the bottom of  the O
                }

}

        printf("The gridIN[] string after both plays have been added is: %s\n", gridIN);                // Printing the gridIN string array after adding in the top half of the O and the bottom half of the O to see where it printed

/*---Creating a for loop to iterate through the gridIN string array so I can set it equalled to the gridOUT string array so I can print the grid after the play has been registered to it---*/

        for(int i = 0; gridIN[i] != '\0'; i++)                  // Creating an integer iterable variale named i and intializing it to zero to match the first index of the gridIN string array and saying that as long as the index of the string array is not equal to the null terminator, then execute the code and iterate accordinlgy
        {
                gridOUT[i] = gridIN[i];                                         // Setting the current index of the gridOUT string array equalled to the corresponding index of the gridIN string array so we can copy it after the play has been executed
        }
}










/*----Step 3: Completing the X's----*/

void xTopLeft()                                                                                                                 // Declaring a void return type variable that will be used to store and call the shape of the top left X
{
        char xTopLeft[] = "\\/";//              // Declaring a string array variable and initializing it for the top left X and attempting to print an X which I will be attempting to put in the top left corner of the grid. I might have to split the x since \n is creating new lines and breaking the x
        printf("%s", xTopLeft);                                                                                         // Printing the xTopLeft string array


}


/*----Step 4: Calling everything inside of the int main() function----*/

int main()
{

/*----Declaring all of my variables and arrays----*/

        int gridIndex;                                                                  // Creating an integer variable to store the index number inside of the string array for grid2
        char TopX1[] = "\\/";                                           // Declaring a string array variable and initializing it for the top left X and attempting to print an X which I will be attempting to put in the top left corner of the grid

        char TopX2[] = "/\\";                                           // Declaring a string array variable and initializing it for the top left X and attempting to print an X which I will be attempting to put in the top left corner of the grid

        char TopD1[] = "/\\";//  "/‾\\";//                                              // Declaring a character string array to store the top half of the O.. The unicode overline is causing issues with grid alignment when priting. Might need to find an alternative for Os

        char TopD2[] = "\\/";                                           // Declaring a character string array to store the bottom half of the O in


        int xIndex;                                                                             // Declaring an integer variable which will store the index number of top left x variable

        char grid2[] = "\n\n       |       |       \n       |       |       \n-------|-------|-------\n       |       |       \n       |       |       \n-------|-------|-------\n       |       |       \n       |       |       \n\n";                        // Creating the grid and storing it inside of a char string array
        char grid2OUT[500];                                                             // Declaring a string character array and initializing it to size 500 which will hold the output grid after the play

        char grid3OUT[500];                                                     // Declaring a string character array and initializing it to size 500 which will hold the output grid after the play for the Os

        char choice = 'a';                                                      // Declaring a character single variable and initializing it with single quotes  x for X's and d for Diamonds

        int column;                                                                             // Declaring an integer variable which will be used to store the column numbers of the grid: 1:Left, 2:Middle, 3: Right
        int row;                                                                                // Declaring an integer variable which will be used to store the row numbers of the grid

        int plays = 9;                                                                  // Declaring an integer variable and initializing it to 9 since the grid has 9 positions which I will be using to iterate through the grid function for continuous plays


/*----Coming up with all combinations for tictactoe variables so I can add to them based on the user input.. Like if the first column has all X's or All D's then declare a tic tac toe and make the game stop or start over----*/

/*---First column tictactoe for x----*/

        int xCol1Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol1Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol1Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---Second column tictactoe for x----*/

        int xCol2Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol2Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe


/*---Third column tictactoe for x----*/

        int xCol3Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol3Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int xCol3Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---First left to right diagonal tictactoe for x----*/

//      int xCol1Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int xCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int xCol3Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---First right to left diagonal tictactoe for x----*/

//      int xCol3Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int xCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int xCol1Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe


/*---First column tictactoe for d----*/

        int dCol1Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol1Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol1Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---Second column tictactoe for d----*/
        int dCol2Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol2Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe


/*---Third column tictactoe for d----*/

        int dCol3Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol3Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
        int dCol3Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---First left to right diagonal tictactoe for d----*/

//      int dCol1Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int dCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int dCol3Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe

/*---First right to left diagonal tictactoe for d----*/

//      int dCol3Row1;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int dCol2Row2;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe
//      int dCol1Row3;                                                                          // Creating an interger variable and naming it X col1 which will hold the number of times an X wa selected by the end-user to help determine the type of tic tac toe



/*----Printing an introduction for the end-user----*/

        printf("\n\nWelcome to Daphnide's Tic Tac Toe game!\n");

        printf("%s\n\n", grid2);                                                                // Printing the grid so the end-user can use it as a reference

        for(int i = 0; plays > 0; i++)                                                                  // Declaring an iterable variable and initializing it to zero and stating the condition that as long as the plays variable is greater than zero then add 1 to i and iterate
        {

                printf("Do you want to be X's or Diamonds? (Enter 'x' for X's or 'd' for Diamonds): ");                 // Printing a prompt for the end-user to let me know if they want X's or Diamonds
                scanf(" %c", &choice);                          // Scanning in the user's character that they chose and storing it inside of the choice character variable


                printf("Your choice: %c\n", choice);                    // Printing out the choice character that the user chose to make sure it is working correctly

                printf("What column do you choose? (1, 2 or 3): ");                             // Asking the end-user what column they choose for their play
                scanf("%d", &column);                                                           // Scanning in the end-user's input and storing it in column


                printf("Your column: %d\n", column);                            // Printing out the end-user's column

                printf("What row do you choose? (1, 2 or 3): ");                        // Printing out a prompt for the end-user for their row
                scanf("%d", &row);                                                                              // Scanning in the end-user's input and storing it inside of the row integer variable

                printf("Your row: %d\n", row);                                                                  // Printing out the end-user's row


/*---Diamond column 1 TicTacToe----*/

                if(choice == 'd' && column == 1 && row == 1)                                    // If the user selected d and the first column an
                {
                        dCol1Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 1 && row == 2)                                    // If the user selected d and the first column an
                {
                        dCol1Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 1 && row == 3)                                    // If the user selected d and the first column an
                {
                        dCol1Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*---Diamond column 2 TicTacToe----*/

                if(choice == 'd' && column == 2 && row == 1)                                    // If the user selected d and the first column an
                {
                        dCol2Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        dCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 2 && row == 3)                                    // If the user selected d and the first column an
                {
                        dCol2Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*---Diamond column 3 TicTacToe----*/

                if(choice == 'd' && column == 3 && row == 1)                                    // If the user selected d and the first column an
                {
                        dCol3Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 3 && row == 2)                                    // If the user selected d and the first column an
                {
                        dCol3Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 3 && row == 3)                                    // If the user selected d and the first column an
                {
                        dCol3Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*---The 6 blocks of code that are commented out below are causing the counts to be off for the variables---*/
/*---First left to right diagonal tictactoe for d----*/
/*

                if(choice == 'd' && column == 1 && row == 1)                                    // If the user selected d and the first column an
                {
                        dCol1Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        dCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 3 && row == 3)                                    // If the user selected d and the first column an
                {
                        dCol3Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }
*/

/*---First right to left diagonal tictactoe for d----*/
/*
                if(choice == 'd' && column == 3 && row == 1)                                    // If the user selected d and the first column an
                {
                        dCol3Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        dCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'd' && column == 1 && row == 3)                                    // If the user selected d and the first column an
                {
                        dCol1Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }
*/
/*---X column 1 TicTacToe----*/

                if(choice == 'x' && column == 1 && row == 1)                                    // If the user selected d and the first column an
                {
                        xCol1Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 1 && row == 2)                                    // If the user selected d and the first column an
                {
                        xCol1Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 1 && row == 3)                                    // If the user selected d and the first column an
                {
                        xCol1Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*---X column 2 TicTacToe----*/

                if(choice == 'x' && column == 2 && row == 1)                                    // If the user selected d and the first column an
                {
                        xCol2Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        xCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 2 && row == 3)                                    // If the user selected d and the first column an
                {
                        xCol2Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*---X column 3 TicTacToe----*/

                if(choice == 'x' && column == 3 && row == 1)                                    // If the user selected d and the first column an
                {
                        xCol3Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 3 && row == 2)                                    // If the user selected d and the first column an
                {
                        xCol3Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 3 && row == 3)                                    // If the user selected d and the first column an
                {
                        xCol3Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

/*--The six code blocks that are commented out could possibly be duplicating the values for the tic tac toe---*/
/*---First left to right diagonal tictactoe for d----*/
/*
                if(choice == 'x' && column == 1 && row == 1)                                    // If the user selected d and the first column an
                {
                        xCol1Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        xCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 3 && row == 3)                                    // If the user selected d and the first column an
                {
                        xCol3Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }
*/

/*---First right to left diagonal tictactoe for d----*/
/*
                if(choice == 'x' && column == 3 && row == 1)                                    // If the user selected d and the first column an
                {
                        xCol3Row1++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 2 && row == 2)                                    // If the user selected d and the first column an
                {
                        xCol2Row2++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

                if(choice == 'x' && column == 1 && row == 3)                                    // If the user selected d and the first column an
                {
                        xCol1Row3++;                                                                                            // If the user inputed the specific choice and set column and row then add 1 to the corresponding variable
                }

*/
/*----Conditional statements with functions for x or d, depending on what the end-user chooses----*/

                if(choice == 'd')                                                                                       // Checking to see if the end-user chose d for diamonds
                {
                        gridDs(grid2, choice, column, row, TopD1, TopD2, grid3OUT);                                                             // Printing the grid by calling the gridOs function that takes in the initial grid, the first top of the O, the bottom of the O play and then storing it in the grid3OUT string array
                }

                else
                {
                        gridXs(grid2, choice, column, row, TopX1, TopX2, grid3OUT);
                }

                plays--;                                                                                                                        // Subtracting 1 to the play so that the loop isn't endless

/*---Checking to see if there is a TicTacToe at the end of the play---*/

/*---First column tictactoe for x----*/

                if((xCol1Row1 + xCol1Row2 + xCol1Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in column 1!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }

/*---Second column tictactoe for x----*/

                if((xCol2Row1 + xCol2Row2 + xCol2Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in column 2!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---Third column tictactoe for x----*/

                if((xCol3Row1 + xCol3Row2 + xCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in column 3!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }

/*---First column tictactoe for x----*/

                if((xCol1Row1 + xCol2Row1 + xCol3Row1) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in row 1!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }

/*---Second column tictactoe for x----*/

                if((xCol1Row2 + xCol2Row2 + xCol3Row2) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in row 2!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---Third column tictactoe for x----*/

                if((xCol1Row3 + xCol2Row3 + xCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X in row 3!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



/*---First left to right diagonal tictactoe for x----*/

                if((xCol1Row1 + xCol2Row2 + xCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X diagonally from left to right!\n");                                                    // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---First right to left diagonal tictactoe for x----*/
                if((xCol3Row1 + xCol2Row2 + xCol1Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player X diagonally from right to left!\n");                                                    // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



/*---First column tictactoe for d----*/

                if((dCol1Row1 + dCol1Row2 + dCol1Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in column 1!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---Second column tictactoe for d----*/

                if((dCol2Row1 + dCol2Row2 + dCol2Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in column 2!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



/*---Third column tictactoe for d----*/

                if((dCol3Row1 + dCol3Row2 + dCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in column 3!\n");                                                      // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }

/*---First column tictactoe for d----*/

                if((dCol1Row1 + dCol2Row1 + dCol3Row1) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in row 1!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---Second column tictactoe for d----*/

                if((dCol1Row2 + dCol2Row2 + dCol3Row2) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in row 2!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



/*---Third column tictactoe for d----*/

                if((dCol1Row3 + dCol2Row3 + dCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D in row 3!\n");                                                 // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



/*---First left to right diagonal tictactoe for d----*/

                if((dCol1Row1 + dCol2Row2 + dCol3Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D diagonally from left to right!\n");                                                    // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }


/*---First right to left diagonal tictactoe for d----*/

                if((dCol3Row1 + dCol2Row2 + dCol1Row3) == 3)                                                                    // Checking for the tic tac toe
                {
                        printf("Tic Tac Toe for player D diagonally from right to left!\n");                                                    // Printing a prompt for the tic tac toe
                        break;                                                                                                                                          // Wanting to exit the program if there is a tic tac toe
                }



        }
/*----Need to now do an if/else or switch for columns, rows, X's and Diamonds----*/
/*
        for(int i = 0; grid2[i] != '\0'; i++)                                           // Creating a for loop to iterate through the grid string array to see how many charaters it has as long as it is not the null terminator index
        {
                gridIndex++;                                                                                            // Add 1 to the index for every iteration through the character string array for grid2 as long as it is not the null terminator index

                printf("%c", grid2[i]);                                                                 // Printing the character found at the current index of the grid2 character string array
        }

        printf("The size of the string character array is grid2[%d}\n", gridIndex + 1);                                         // Printing the size of the grid2 character string array and adding 1 to take in account the null terminator index


        xTopLeft();                                                                                                                                                     // Calling the xTopLeft function to see how it prints out

        for(int i = 0;  TopLeftx[i] != '\0'; i++)                                                                               // Creating a for loop to iterate throug the top left x string array to get the size of it
        {
                xIndex++;                                                                                                                       // Increasing the index by 1 as long as the index is not equal to the null terminator inside of the xTopLeft string array
        }

        printf("The size of the top left x is: xTopLeft[%d]\n", xIndex + 1);            // Printing the index size of the xTopLeft string array and adding 1 to the xIndex variable to account for the null terminator index


        //printf("%s\n", grid2);                                                                                                // Printing the grid using print and passing in the string
        grid(grid2, TopLeftx, TopLeftx2, grid2OUT);                                                     // Printing the grid by calling th grid function previously created which take in the initial grid, and then the play and then the output

        printf("grid2[] character string array after the function is done running is: %s", grid2);                      // Checking to see if after the function is done running if the inital grid2 string array is updated with the play since when I pass it into the gridOs function, the X is already there

*/
        return 0;

    }