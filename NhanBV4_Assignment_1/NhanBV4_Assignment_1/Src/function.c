

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

/*******************************************************************************
* Definitions
******************************************************************************/

/*******************************************************************************
* * Variables
******************************************************************************/

/*******************************************************************************
* Prototypes
******************************************************************************/

/*******************************************************************************
*  Code
******************************************************************************/


/*Instruction book*/
void function(void)
	{
        printf("Type 'c' to create an array of integers\n");
        printf("Enter 'p' to in the range\n");
        printf("Enter 'i' to add an element to the end of the range.\n");
        printf("Enter 'd' to delete an element at the kth position\n");
        printf("Enter 's' to sort of the number of sequence BY DIRECSTATION.\n");
        printf("Enter 'p' to in the range\n");
        printf("Enter 'x' to sort in descending order\n");
        printf("Type 't' to search for a number x in the range\n");
        printf("If input 'e', exit program.\n");

    }

/*function to input array*/
void input_Array(uint8_t *arr, uint16_t *size_1)
{
    uint16_t index_1;
    printf("\tCreat a array: \n ");
    for(index_1 = 0 ; index_1 < *size_1; index_1++)
    {
        printf("\tEnter array: a[%d] = ", index_1);
        scanf("%d", &arr[index_1]);/*user input from keyboard*/
        getchar();
    }
}

/*function to print array*/
void output_Array(uint8_t *arr, uint16_t *size_2)
{
    uint16_t index_2 = 0;
    if(*size_2 == 0)
        {
            printf("\n\tEmpty array");
        }
    else
        printf("\n\t print array:  ");
    for(index_2 ; index_2 < *size_2; index_2++)
    {
    printf(" %d ", arr[index_2]);
    }
}

/*function that adds element to the end*/
void add_Array(uint8_t *arr, uint16_t *size_3)
{
    uint16_t index_3 = 0;
    uint16_t last_element;

    printf("\n\tEnter number want add ");
    scanf("%d", &last_element);/*user input from keyboard*/
    getchar();

    (*size_3)++;
    if(*size_3 < 0 || *size_3 > 100)
    {
        printf("\tout of limit array ");
    }
    else
    {
        printf("\tThe array after add last element: ");
        arr[(*size_3) - 1] = last_element ;
        output_Array(arr, size_3 );
    }
}

/*function to remove part from any array*/
void remove_Array(uint8_t *arr, uint16_t *size_4)
{
    uint16_t index_4 = 0;
    uint16_t remove_k;
    /*check if the element is in the array*/
    do {
        printf("\tenter remove_k: ");
        scanf("%d", &remove_k);/*user input from keyboard*/
        if (remove_k < 0 || remove_k > (*size_4)) {
            printf("\tNot k_th element in array\n");
        }
    } while (remove_k < 0 || remove_k > (*size_4));
    /*Check if the element is out of bounds*/
    (*size_4)--;
    if(*size_4 < 0 || *size_4 >= 100)
    {
        printf("\tout of limit array ");
    }
    else
    {
        printf("\tThe array after remove: ");

        for (index_4 = remove_k; index_4 < (*size_4); index_4++)
        {
            arr[index_4] = arr[index_4 + 1];
        }

       output_Array(arr, size_4 );
    }
}

/*function to swap positions of 2 numbers*/
void swap_TwoNumber(uint16_t *a, uint16_t *b)
{
    uint16_t temp = *a;
    *a = *b;
    *b = temp;
}

/*ascending and descending sort function*/
void sortArray(uint8_t *arr, uint16_t *size_5, uint16_t chose)
{
    uint16_t index_5=0;
    uint16_t index_6=0;

    for(index_5; index_5 < *size_5; index_5 ++)
    {
        for(index_6 = index_5 ; index_6 < *size_5 ;index_6 ++)
        {
            if(chose == 's')
            {
                if(arr[index_5] > arr[index_6])
                {
                    swap_TwoNumber(&arr[index_5 ], &arr[index_6 ]);
                }
            }
            if(chose == 'x')
            {
                if(arr[index_5] < arr[index_6])
                {
                    swap_TwoNumber(&arr[index_5 ], &arr[index_6 ]);
                }
            }
        }
    }
        printf("\t new array:  ");
        output_Array(arr, size_5 );
}

/*function to find element in array*/
int search_Number_Array(uint8_t *arr, uint16_t *size_2, uint16_t number)
{
    uint16_t index_2 = 0;
    uint16_t checkNumber = false;
    for(index_2 ; index_2 < *size_2; index_2++)
    {
        if(number == arr[index_2 ])
        {
            printf("\t Number %d is at position a[%d]", number, index_2);
            checkNumber = true;
        }
    }
    return checkNumber ;
}