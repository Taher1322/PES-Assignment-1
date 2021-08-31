/*************************
 *
 *    
 *
 *    File name   : test.c
 *    Description : Test file to test different combinations of the functions and return 1 and 0 
 *    1 when all test are successful
 *    0 when any test fails
 *
 *    Author: TAHER S UJJAINWALA
 * 	  Tools : CODELITE IDE, GNU GCC 
 *    Date  : 08/30/2021    
 *    		 
 * 
 **************************/

//Including all .h header files
#include <stdio.h>
#include <stdint.h>
#include <grab_three_bit.h>
#include <twiggle_bit.h>
#include <uint_to_binstr.h>
#include <int_to_binstr.h>
#include <string.h>


//Test cases for Grab three bits 
uint32_t test_grab_three_bits(uint32_t input, int start_bit)
{
    int i =0, j=0;
    if(grab_three_bits(0x7337, 6)==4)
    {
        i++;
    }
    if(grab_three_bits(0x7337, 7) == 6)
    {
        i++;
    }
    if(grab_three_bits(0x7337, 30) ==  0xFFFFFFFF)
    {
        j++;
    }
    if (grab_three_bits(20, 3) == 2)
    {
        i++;
    }
    if(grab_three_bits(0x20, 3) == 4)
    {
        i++;
    }
    if(grab_three_bits(0x1556, 29) == 0)
    {
        i++;
    }
    if (i==5 && j==1)
    {
        return 1;
    }
    else 
        return 0;
}

//Test cases for Twiggle bit without changing other bits 
uint32_t test_twiggle_bit(uint32_t input, int bit, operation_t operation)
{
    int i = 0, j =0;
    if (twiggle_bit(0, 0, SET) == 1) 
    {  
        i++;
    }
    if (twiggle_bit(0, 3, SET) == 8)
    {
        i++;
    }
    if (twiggle_bit(0x7337, 5, TOGGLE)== 0x7317)
    {
        i++;
    }
    if (twiggle_bit(0x5336, 32, CLEAR)== 0xFFFFFFFF)
    {
        j++;
    }
    if (twiggle_bit(53, 4, CLEAR) == 37)
    {
        i++;
    }
    if (twiggle_bit(0x53, 10, SET) == 1107)
    {
        i++;
    }
    if (i == 5 && j==1)
        return 1;
    else 
        return 0;
}


//Test cases for Unsigned int to Binary
int test_uint_to_binstr(char *str, size_t size, uint32_t num, uint8_t nbits) 
{
    int result, i =0, j=0;
    char data[100];
    result = uint_to_binstr(data, 10, 18, 8);
    if(result != -1)
        i++;
    else 
        j++;
    result = uint_to_binstr(data, 10, 65400, 16);
    if(result != -1)
        i++;
    else 
        j++;    
    result = uint_to_binstr(data, 10, 310, 0);
    if(result != -1)
        i++;
    else 
        j++;    
    result = uint_to_binstr(data, 10, 310, 4);
    if(result != -1)
        i++;
    else 
        j++;    
    result = uint_to_binstr(data, 10, 250, 7);
    if(result != -1)
        i++;
    else 
        j++;    
    result = uint_to_binstr(data, 10, 32000, 16);
    if(result != -1)
        i++;
    else 
        j++;   
    if(i==3 && j==3)
        return 1;
    else 
        return 0;
}


//Test cases for Signed int to Binary
int test_int_to_binstr(char *str, size_t size, uint32_t num, uint8_t nbits)
{
    int result, i =0, j=0;
    char data[100];
    result = int_to_binstr(data, 10, 18, 8);
    if(result != -1)
        i++;
    else 
        j++;   
    result = int_to_binstr(data, 10, -1, 4);
    if(result != -1)
        i++;
    else 
        j++;   
    result = int_to_binstr(data, 10, -3, 8);
        if(result != -1)
        i++;
    else 
        j++;   
    result = int_to_binstr(data, 10, 20, 4);
        if(result != -1)
        i++;
    else 
        j++;   
    if (i ==3 && j==1)
        return 1;
    else 
        return 0;
    //printf("I value is %d", i);
    //printf("J value is %d", j);
    //printf("Result is %d\n", result);
}


//Test cases for Int to Hex
int test_uint_to_hexstr(char *str, size_t size, uint32_t num, uint8_t nbits)
{
    int result, i =0, j=0;
    char data[100];
    result = uint_to_hexstr(data, 10, 18, 8);
    if(result != -1)
        i++;
    else 
        j++;
    result = uint_to_hexstr(data, 10, 18, 10);
    if(result != -1)
        i++;
    else 
        j++; 
    result = uint_to_hexstr(data, 10, 65400, 16);
    if(result != -1)
        i++;
    else 
        j++;
    result = uint_to_hexstr(data, 10, 18, 16);
    if(result != -1)
        i++;
    else 
        j++;
    result = uint_to_hexstr(data, 10, 310, 16);
    if(result != -1)
        i++;
    else 
        j++;
        
    if (i ==4 && j==1)
        return 1;
    else 
        return 0;
    printf("I value is %d", i);
    printf("J value is %d", j);
    //printf("Data is %s\n", data);
}

//Test cases for Hex Dump
char test_hexdump(char *str, size_t size, const void *loc, size_t nbytes)
{
    const char *buf= \
    "To achieve great things, two things are needed:\n" \
    "a plan, and not quite enough time.";
    char store[1024];
    puts(hexdump(store, sizeof(store), buf, strlen(buf)+1));
    printf("%s\n", store);
    
    char *val= \
    "This first assignment is intended to let you refresh some basic C skills and also gain familiarity with \n" \
    "logical bit operations. The project is due on Aug 31 at 10:30 am Mountain time, and should be submitted \n" \
    "on Canvas. Your submission will consist of two parts:";
    puts(hexdump(store, sizeof(store), val, strlen(val)+1));
    printf("%s\n", store);
    return 0;
    
}