/*************************
 *
 *    
 *
 *    File name   : grab_three_bits.c
 *    Description : Gets the value of 3 bits from the input value entered
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

uint32_t grab_three_bits(uint32_t input, int start_bit)         //Function to return 3 bits from the input value

{
    int value;
    if (start_bit<30)                                          //Checking boundary conditions 
    {
        value = input >> start_bit;                            //Right shifting from the input value 
        value = value & 0x0007;                                //Masking the last three digits shifted with 07 to get the required value
        return value;                                          //Returning the value 
    }
    else
    return 0xFFFFFFFF;                                         //Returning error value
}