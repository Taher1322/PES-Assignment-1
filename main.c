/*************************
 *
 *    
 *
 *    File name   : main.c
 *    Description : Main file to call standard functions
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/30/2021    
 *    		 
 * 
 **************************/

//Including all header files
#include <stdio.h>
#include <stdint.h>
#include <grab_three_bit.h>
#include <twiggle_bit.h>
#include <uint_to_binstr.h>
#include <int_to_binstr.h>
#include <uint_to_hexstr.h>
#include <hexdump.h>
#include <string.h>
//#include <test.h>


int result = 0;
//char data[100];

int main()
{
    result = test_grab_three_bits();
    if (result ==1)
        printf("Grab Three Bits function tested successfully \n");
    else 
        printf("Grab Three Bits function testing failed \n");
    result = test_twiggle_bit();
    if (result ==1)
        printf("Twiggle bit function tested successfully \n");
    else 
        printf("Twiggle bit function testing failed \n");
    result = test_uint_to_binstr();
    if (result ==1)
        printf("Unsigned integer to Binary function tested successfully \n");
    else 
        printf("Signed integer to Binary function testing failed \n");
    result = test_int_to_binstr();
    if (result ==1)
        printf("Signed integer to Binary function tested successfully \n");
    else 
        printf("Unsigned integer to Binary function testing failed \n");
    result = test_uint_to_hexstr();
    if (result ==1)
        printf("Unsigned integer to Hex function tested successfully \n");
    else 
        printf("Unsigned integer to Hex function testing failed \n");
    test_hexdump();
}

