/*************************
 *
 *    
 *
 *    File name   : twiggle_bit.c
 *    Description : Changes single bit without changing any other bit (Operations performed are SET, CLEAR, and TOGGLE)
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/30/2021    
 *    		 
 * 
 **************************/
//Including the .h header files 
#include <stdio.h>
#include <stdint.h>

//Creating Enum - user defined data type 
typedef enum {
CLEAR,
SET,
TOGGLE
} operation_t;

uint32_t twiggle_bit(uint32_t input, int bit, operation_t operation)    //Function for bit manipulation
{
    if((bit <32) && (operation < 3))                                    //Checking boundary conditions 
    {
        if (operation == 0)                                             //Clear operation is performed
        {
            input = input & ~(1<< bit);                                 //Shifting and clearing bit using BITWISE AND
            return input;                                               //Returning the value
        }
        else if(operation == 1)                                         //Set operation is performed 
        {
            input = input | (1<<bit);                                   //Shifting and setting bit using BITWISE OR
            return input;                                               //Returning the value
        }
        else if (operation ==2)                                         //Toggling operation is performed
        {
            input = input ^ (1<<bit);                                   //Shifting and toggling bit using XOR
            return input;                                               //Returning the value
        }
        else 
        return 0xFFFFFFFF;                                              //Returning the error

    }
    else 
     return 0xFFFFFFFF;                                                 //Returning the error
}
