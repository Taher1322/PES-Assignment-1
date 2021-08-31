/*************************
 *
 *    
 *
 *    File name   : main.c
 *    Description : Main file to call standard functions
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/31/2021    
 *    		 
 * 
 **************************/
 
//Including all .h header files
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <uint_to_hexstr.h>

//Defining some variables
char var;
char data[6];

char hexdump(char *str, size_t size, const void *loc, size_t nbytes)     //Function to dump string
{
    for(int i = 0, j = 0; i < nbytes; i++, j++)                           //Fetching the string and converting into hex main loop
    {
        if(j == 0)                                                        //Condition check to print the address i.e 0x0000, 0x0010, etc
        {
            uint_to_hexstr(data, 6, i, 16);
            for(int i = 0; i < 6; i++)
            {
                *str = *(data+i);                                         //Storing the int to hex converted data in each location of str 
                str++;
            }
            *str = ' ';                                                  //Adding space after the address
            str++;
        }
        *str = ' ';                                                     //Adding space after the address
        str++;
        char temp = *(char *)(loc+i);                                  //Fetching the first character and masking the MSB to further convert into hex
        var = temp & 0xF0;
        *str = var >> 4;
        if(*str >= 0 && *str < 10)                                     //Int to hex conversion check conditions
            *str += '0';
        else if(*str >= 10 && *str < 16)
            *str += 'A' - 10;
        str++;
        
        var = temp & 0x0F;                                            //Fetching the first character and masking the LSB to further convert into hex
        *str = var;
        if(*str >= 0 && *str < 10)                                    //Int to hex conversion check conditions
            *str += '0';
        else if(*str >= 10 && *str < 16)
            *str += 'A' - 10;
        str++;
        if(j == 15)                                                   //This condition checks the 16 byte character and prints new line
        {
            j = -1;
            *str = '\n';
            str++;
            
        }
    }
 
    return 0; 

}