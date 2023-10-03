#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <stdio.h>

/*
* @brief <user direction book>
*/
void function(void);

/*
* @brief <enter a new array>
*
* @return <>
*/
void input_Array(uint8_t *arr, uint16_t *size_1);

/*
* @brief <printf a new array>
*
* @return <>
*/
void output_Array(uint8_t *arr, uint16_t *size_2);

/*
* @brief <add element to the end of array>
*
* @return <>
*/
void add_Array(uint8_t *arr, uint16_t *size_3);

/*
* @brief <delete array element>
*
* @return <>
*/
void remove_Array(uint8_t *arr, uint16_t *size_4);

/*
* @brief <swap two number>
*
* @param a,b
* @return <>
*/
void swap_TwoNumber(uint16_t *a, uint16_t *b);

/*
* @brief <Sort array>
*
* @return <>
*/
void sortArray(uint8_t *arr, uint16_t *size_5, uint16_t chose);

/*
* @brief <find number in array>
*
* @return <>
*/
int search_Number_Array(uint8_t *arr, uint16_t *size_2, uint16_t number);

#endif  /*_FUNCTION_H*/
