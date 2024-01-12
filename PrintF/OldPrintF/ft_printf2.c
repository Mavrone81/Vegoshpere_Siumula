/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: your_username <your_email@example.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:56:23 by your_username      #+#    #+#             */
/*   Updated: 2024/01/08 01:07:59 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h> 
//#include "ft_printf.h"

static int  ft_check(const char *c, va_list arg);
static int  ft_print_char(int c);
static int  ft_print_str(char *str);
static int  ft_print_dig(long n, int base);
int ft_printf(const char *input, ...);

/*int main() {
    // Test cases for %c
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    char ch4 = 'D';
    char ch5 = 'E';

    printf("Printf Char 1: %c\n", ch1);
    ft_printf("ft_printf Char 1: %c\n", ch1);
    printf("Printf Char 2: %c\n", ch2);
    ft_printf("ft_printf Char 2: %c\n", ch2);
    printf("Printf Char 3: %c\n", ch3);
    ft_printf("ft_printf Char 3: %c\n", ch3);
    printf("Printf Char 4: %c\n", ch4);
    ft_printf("ft_printf Char 4: %c\n", ch4);
    printf("Printf Char 5: %c\n", ch5);
    ft_printf("ft_printf Char 5: %c\n", ch5);

    // Test cases for %s
    char *str1 = "Hello, world!";
    char *str2 = "This is a test.";
    char *str3 = "12345";
    char *str4 = "Special @#$ characters!";
    char *str5 = "";

    printf("Printf String 1: %s\n", str1);
    ft_printf("ft_printf String 1: %s\n", str1);
    printf("Printf String 2: %s\n", str2);
    ft_printf("ft_printf String 2: %s\n", str2);
    printf("Printf String 3: %s\n", str3);
    ft_printf("ft_printf String 3: %s\n", str3);
    printf("Printf String 4: %s\n", str4);
    ft_printf("ft_printf String 4: %s\n", str4);
    printf("Printf String 5 (Empty): %s\n", str5);
    ft_printf("ft_printf String 5 (Empty): %s\n", str5);

    // Test cases for %p
    void *ptr1 = &ch1;
    void *ptr2 = &str1;
    void *ptr3 = NULL;
    void *ptr5 = &ch5;

    printf("Printf Pointer 1: %p\n", ptr1);
    ft_printf("ft_printf Pointer 1: %p\n", ptr1);
    printf("Printf Pointer 2: %p\n", ptr2);
    ft_printf("ft_printf Pointer 2: %p\n", ptr2);
    printf("Printf Pointer 3 (NULL): %p\n", ptr3);
    ft_printf("ft_printf Pointer 3 (NULL): %p\n", ptr3);
    printf("Printf Pointer 5: %p\n", ptr5);
    ft_printf("ft_printf Pointer 5: %p\n", ptr5);

    // Test cases for %d %i
    int num1 = 42;
    int num2 = -12345;
    int num3 = 0;
    int num4 = 987654321;
    int num5 = -987654321;

    printf("Printf Integer 1: %d\n", num1);
    ft_printf("ft_printf Integer 1: %d\n", num1);
    printf("Printf Integer 2: %i\n", num2);
    ft_printf("ft_printf Integer 2: %i\n", num2);
    printf("Printf Integer 3: %d\n", num3);
    ft_printf("ft_printf Integer 3: %d\n", num3);
    printf("Printf Integer 4: %i\n", num4);
    ft_printf("ft_printf Integer 4: %i\n", num4);
    printf("Printf Integer 5: %d\n", num5);
    ft_printf("ft_printf Integer 5: %d\n", num5);

    // Test cases for %u
    unsigned int unsignedNum1 = 12345;
    unsigned int unsignedNum2 = 0;
    unsigned int unsignedNum3 = 4294967295; // Maximum unsigned int value
    unsigned int unsignedNum4 = 987654321;
    unsigned int unsignedNum5 = 999999999;

    printf("Printf Unsigned Integer 1: %u\n", unsignedNum1);
    ft_printf("ft_printf Unsigned Integer 1: %u\n", unsignedNum1);
    printf("Printf Unsigned Integer 2: %u\n", unsignedNum2);
    ft_printf("ft_printf Unsigned Integer 2: %u\n", unsignedNum2);
    printf("Printf Unsigned Integer 3 (Max): %u\n", unsignedNum3);
    ft_printf("ft_printf Unsigned Integer 3 (Max): %u\n", unsignedNum3);
    printf("Printf Unsigned Integer 4: %u\n", unsignedNum4);
    ft_printf("ft_printf Unsigned Integer 4: %u\n", unsignedNum4);
    printf("Printf Unsigned Integer 5: %u\n", unsignedNum5);
    ft_printf("ft_printf Unsigned Integer 5: %u\n", unsignedNum5);

    // Test cases for %x and %X
    unsigned int hexNum1 = 255;
    unsigned int hexNum2 = 4096;
    unsigned int hexNum3 = 16;
    unsigned int hexNum4 = 0;
    unsigned int hexNum5 = 65535;

    printf("Printf Hexadecimal (lowercase) 1: %x\n", hexNum1);
    ft_printf("ft_printf Hexadecimal (lowercase) 1: %x\n", hexNum1);
    printf("Printf Hexadecimal (lowercase) 2: %x\n", hexNum2);
    ft_printf("ft_printf Hexadecimal (lowercase) 2: %x\n", hexNum2);
    printf("Printf Hexadecimal (lowercase) 3: %x\n", hexNum3);
    ft_printf("ft_printf Hexadecimal (lowercase) 3: %x\n", hexNum3);
    printf("Printf Hexadecimal (lowercase) 4: %x\n", hexNum4);
    ft_printf("ft_printf Hexadecimal (lowercase) 4: %x\n", hexNum4);
printf("Printf Hexadecimal (lowercase) 5: %x\n", hexNum5);
    ft_printf("ft_printf Hexadecimal (lowercase) 5: %x\n", hexNum5);
    printf("Printf Hexadecimal (uppercase) 1: %X\n", hexNum1);
    ft_printf("ft_printf Hexadecimal (uppercase) 1: %X\n", hexNum1);
    printf("Printf Hexadecimal (uppercase) 2: %X\n", hexNum2);
    ft_printf("ft_printf Hexadecimal (uppercase) 2: %X\n", hexNum2);
    printf("Printf Hexadecimal (uppercase) 3: %X\n", hexNum3);
    ft_printf("ft_printf Hexadecimal (uppercase) 3: %X\n", hexNum3);
    printf("Printf Hexadecimal (uppercase) 4: %X\n", hexNum4);
    ft_printf("ft_printf Hexadecimal (uppercase) 4: %X\n", hexNum4);
    printf("Printf Hexadecimal (uppercase) 5: %X\n", hexNum5);
    ft_printf("ft_printf Hexadecimal (uppercase) 5: %X\n", hexNum5);

    // Test case for %%
    printf("Printf Percentage Sign: %%\n");
    ft_printf("ft_printf Percentage Sign: %%\n");

    // Test all
    printf("Printf All Check: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", 'A', "Hello, world!", &ch1, 42, 12345, 255, 255);
    ft_printf("ft_printf All Check: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", 'A', "Hello, world!", &ch1, 42, 12345, 255, 255);
    printf("Printf All Check 2: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", 'Z', "Testing 123", &ch2, -12345, 0, 4096, 4096);
    ft_printf("ft_printf All Check 2: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", 'Z', "Testing 123", &ch2, -12345, 0, 4096, 4096);
    printf("Printf All Check 3: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", '9', "Special @#$ characters!", &ch3, INT_MAX, UINT_MAX, 16, 16);
    ft_printf("ft_printf All Check 3: Char: %c, String: %s, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n", '9', "Special @#$ characters!", &ch3, INT_MAX, UINT_MAX, 16, 16);

    return 0;
}*/

int ft_printf(const char *format, ...)
{
    unsigned int    count;
    va_list         ap;
    
    count = 0;
    va_start(ap, format);
    while (*format)
    {
        if (*format != '%' && *format)
            write (1, &(*format), 1);
        else if (*(++format) == '%')
            write (1, &(*format), 1);
        else
            count += ft_check(format, ap) -1;
        count++;
        format++;
    }
    va_end(ap);
    return (count);
}

static int  ft_check(const char *c, va_list arg)
{
    int count;

    count = 0;
    if (*c == 'c')
        count += ft_print_char(va_arg(arg, int));
    else if (*c == 's')
        count += ft_print_str(va_arg(arg, char *));
    else if (*c == 'x' || *c == 'X')
        count += ft_print_dig((long)va_arg(arg, int), 10);
    else if (*c == 'd')
        count += ft_print_dig((long)va_arg(arg, unsigned int), 16);
    return (count);
}

static int  ft_print_char(int c)
{
    return (write(1, &c, 1));
}

static int  ft_print_str(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        ft_print_char((int)*str);
        ++count;
        ++str;
    }
    return (count);
}

static int  ft_print_dig(long n, int base)
{
    int     count;
    char    *hex;
    
    count = 0;
    hex = "0123456789abcfef";
    if (n < 0)
    {
        write (1, "-", 1);
        return (ft_print_dig(-n, base) + 1);
    }
    else if (n < base)
    {
        return (ft_print_char(hex[n]));
    }
    else
    {
        count = ft_print_dig(n / base, base);
        return (count + ft_print_dig(n % base, base));
    }
}
