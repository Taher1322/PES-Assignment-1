/*************************
 *
 *    
 *
 *    File name   : int_to_binstr.c
 *    Description : Returns binary represtation of an unsigned as well signed integers. Stores the binary representation in a char array
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/30/2021    
 *    
 *    Reference of the Logic is taken from Stackoverflow
 *    Applicable Link :https://stackoverflow.com/questions/49829864/decimal-to-binary-using-bitwise-operator/49830262 
 * 
 **************************/
//Including the .h header files 
#include <stdio.h>
#include <stdint.h>

int int_to_binstr(char *str, size_t size, uint32_t num, uint8_t nbits)     //Function to return binary value of signed and unsgined integer
{
    int bin_value;                                                         //Defining some local variables for calculations
    int max_value = 1;
    int base = 2;
    int new_max_value;
    
    if(nbits !=0)                                                         //Checking boundary condition
    {
        for (int i = nbits -1; i>=0; i--)                                 //For loop to calculate 2^n value 
        {
            max_value = max_value * base;
        }

        new_max_value = (max_value/2);                                    //Dividing the 2^n value because the data type is signed integer  
        if ((-new_max_value <num))                                        //Checking if the nbit is in the range of the number 
        {   
            *str =  '0';                                                  //Storing the first two charater in char array 
            str += 1;   
            *str = 'b';
            str += 1;
            int counter =2;                                               //Variable to keep a count and return a value 
            for(int i = nbits -1; i>=0; i--)                              //Shifting the bits based on nbits and performing & function to get LSB
            {
                bin_value = num >> i;

                if(bin_value &1)                                          //Checking the LSB 
                *str = '1';                                               //Storing in the char array
                else 
                *str = '0';                                               //Storing in the char array
                counter++;
                str +=1;
            }
            str +=1;                                                     //Incrementing to store last charater i.e null character    
            *str = '\0';
            return counter;                                              //Returning the counter value         
        }
        else
        {
            *str = 0;
            return -1;                                                  //Returning the error value
        }
        
    }
    else 
    {
        *str = 0;
        return -1;                                                      //Returning the error value
    }   

}

