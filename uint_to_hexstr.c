/*************************
 *
 *    
 *
 *    File name   : uint_to_hexstr.c
 *    Description : Returns Hex represtation of an unsigned integer. Stores the hex representation in a char array
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/30/2021    
 *    
 *  
 * 
 **************************/

//Including the .h header files
#include <stdio.h>
#include <stdint.h>


int uint_to_hexstr(char *str, size_t size, uint32_t num, uint8_t nbits)     //Function to return hex value of an unsigned integer
{   
    *str = '0';                                                             //Storing the first two charater in char array 
    str +=  1;   
    *str = 'x';
    str +=  1;
    int counter =2;                                                         //Defining some local variables
    int store_value;
    int temp = 0;
    if (nbits == 4 | nbits == 8 | nbits == 16 | nbits == 32)                //nbit condition check
    {
    for (int i= (nbits/4) -1; i >=0 ; i--)                                  //For loop to get LSB and MSB (nibble) 
    {
        temp = num >> (4*i);
        temp = temp & 0x000F;
        if (temp >=0 && temp < 10)                                          //Int to hex conversion check conditions
        {
            //store_value = '0' + temp;
            *str = '0' + temp;
            str +=1;
        }
        else if (temp >= 10 && temp < 16)                                  //Int to hex conversion check conditions
        {
            *str = 'A' + temp -10;
            str +=1;
        }
        counter++;
    }
     str +=1;                                                              //Returning the counter
     *str = '\0';
     return counter;   
    }
    else
    {
        return -1;                                                          //Returning the error 
        *str = 0;
        
    }
}