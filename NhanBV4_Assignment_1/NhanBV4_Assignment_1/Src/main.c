
#include "function.h"
#include <string.h>

/*******************************************************************************
* Definitions
******************************************************************************/

#define Max 100U
#define false 0U
#define true 1U

/*******************************************************************************
* Prototype
******************************************************************************/

int main()
{

/*******************************************************************************
* Variables
******************************************************************************/

    uint8_t array[100];/*array declaration*/
    uint16_t n = 0;/*initialize the number of array elements*/
    uint8_t character[10];/*character string*/
    uint16_t check = 1;
    uint16_t last_element = 0;/*variable initialization is added to the last element of the array*/
    uint16_t s_number = 0;/*initialize the variable to look up in the array*/

/*******************************************************************************
*  Code
******************************************************************************/

    /*show instructions on the screen*/
    function();

    while(check == 1 )
    {
        do
        {
            printf("%s","\nenter the characters: ");
            scanf(" %s",character );/*user input from keyboard*/
            getchar();
            /*check character if input string then re-enter*/
            if(strlen(character) > 1)
            {
                printf("\tError! try again");
            }
        }while(strlen(character) > 1);

        switch (character[0])
        {
            case 'c':
                printf("\nEnter 'c' to create an array of integers ");
            /*check the number of array elements*/
                do
                {
                    printf("\n\tEnter number element: ");
                    scanf("%d", &n);/*user input from keyboard*/

                    if(n < 0 || n > Max)
                   {
                       printf("\tError! try again");
                   }
                }
                    while(n < 0 || n > Max);
                    input_Array(array, &n);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 'p':
                    printf("Enter 'p' to print the range: ");
                    output_Array(array, &n);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 'i':
                    printf("Enter 'i' to add an element to the end of array. ");
                    add_Array(array, &n);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 'd':
                    printf("Enter 'd' to delete an element at position k. \n");
                    remove_Array(array, &n);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 's':
                    printf("Enter 's' to sort numbers in ascending order. \n");
                    sortArray(array, &n, character[0]);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 'x':
                    printf("Enter 'x' to sort in descending order. \n");
                    sortArray(array, &n, character[0]);
                    printf("\n--------------------------------------------------------------------\n");
                    break;

                case 't':
                    printf("Type 't' to find if a number x is in the range. ");
                    printf("\n\tEnter a number: ");
                    scanf("%d", &s_number);

                    if(search_Number_Array(array, &n, s_number) == 0)
                    {
                         printf("\t Number %d is not in array", s_number );
                    }
                    break;
                /*exit program*/
                case 'e':
                    check = 0;
                    break;

                default:
                    printf("\tError! try again");
                    break;
            }
    }/*if enter 'e' then exit the loop to terminate the program*/
    printf("\n-------THE AND-------");
    return 0;
}