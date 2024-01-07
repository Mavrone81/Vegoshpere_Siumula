/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: your_username <your_email@example.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:28:05 by your_username      #+#    #+#             */
/*   Updated: 2024/01/07 16:28:05 by your_username     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

static int  ft_check(const char *i, va_list t);
static int  ft_print_char(char c, va_list ap);
static int  ft_print_num(char c, long num, va_list ap);
static int  ft_print_addr(char c, char *hex, va_list ap, unsigned long num);

int	ft_printf(const char *format, ...)
{
	unsigned int    count;
	va_list 		ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%' && *format)
			write (1, &(*format), 1);
		else if (*++format == '%')
			write (1, format, 1);
		else
			count += ft_check(format, ap) - 1;
		count++;
		format++;
	}
	va_end(ap);
	return (count);
}

static int  ft_check(const char *c, va_list ap)
{
	if (*c == 'c' || *c == 's')
		return (ft_print_char(*c, ap));
	if (*c == 'd' || *c == 'i' || *c == 'u')
		return (ft_print_num(*c, 0, ap));
	if (*c == 'x' || *c == 'p')
		return (ft_print_addr(*c, "0123456789abcdef", ap, 0));
	if (*c == 'X')
		return (ft_print_addr(*c, "0123456789ABCDEF", ap, 0));
	return (0);
}

static int  ft_print_char(char c, va_list ap)
{
	unsigned int	count;
	char			*str;

	count = 0;
	if (c == 'c')
	{
		write(1, (char []){va_arg(ap, int)}, 1);
		return (1);
	}
	if (c == 's')
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			write(1, "(null)", 6);
			return (6);
		}
		while (str[count])
			write (1, &(str[count++]), 1);
		return (count);
	}
	return (0);
}

static int	ft_print_num(char c, long num, va_list ap)
{
	int	    count;

	count = 0;
	if (c == 'd' || c == 'i')
		num = (long)va_arg(ap, int);
	if (c == 'u')
		num = (long)va_arg(ap, unsigned int);
	if (c == 'd' || c == 'i' || c == 'u')
		c = 'a';
	if (num < 0)
	{
		write (1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
		count += ft_print_num(c, num / 10, ap);
	write (1, (char []){num % 10 + '0'}, 1);
	return (count + 1);
}

static int	ft_print_addr(char c, char *hex, va_list ap, unsigned long num)
{
	int	count;

	count = 0;
	if (c == 'x' || c == 'X')
	{
		num = (unsigned int)num;
		num = (unsigned int)va_arg(ap, int);
	}
	if (c == 'p')
	{
		num = (unsigned long)va_arg(ap, void *);
		if (num == 0)
			return (write(1, "(nil)", 5)); 
		write (1, "0x", 2);
		count = 2;
	}
	if (c == 'x' || c == 'X' || c == 'p')
		c = 'b';
	if (num > 15)
		count += ft_print_addr(c, hex, ap, num / 16);
	write (1, &(hex[num % 16]), 1);
	return (count + 1);
}

void compare_outputs(const char *format, ...) {
    va_list args_printf, args_ft_printf;
    char actual_ft_printf[1000];

    // Initialize the argument list for printf
    va_start(args_printf, format);

    // Print the results
    printf("Expected: %s\n", format);

    // Get the actual output from printf
    vprintf(format, args_printf);

    // Reset the argument list for printf
    va_end(args_printf);

    // Initialize a new argument list for ft_printf
    va_start(args_ft_printf, format);

    // Get the actual output from ft_printf
    vsprintf(actual_ft_printf, format, args_ft_printf);

    // Reset the argument list for ft_printf
    va_end(args_ft_printf);

    // Print the actual output from ft_printf
    printf("Actual (ft_printf): %s\n", actual_ft_printf);

    // Compare the outputs
    if (strcmp(format, actual_ft_printf) == 0) {
        printf("[OK] Match between printf and ft_printf\n");
    } else {
        printf("[KO] Mismatch between printf and ft_printf\n");
    }
}

int main() {
    // Test cases for %c
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    char ch4 = 'D';
    char ch5 = 'E';

    compare_outputs("Printf Char 1: A\n", "ft_printf Char 1: %c\n", ch1);
    compare_outputs("Printf Char 2: B\n", "ft_printf Char 2: %c\n", ch2);
    compare_outputs("Printf Char 3: C\n", "ft_printf Char 3: %c\n", ch3);
    compare_outputs("Printf Char 4: D\n", "ft_printf Char 4: %c\n", ch4);
    compare_outputs("Printf Char 5: E\n", "ft_printf Char 5: %c\n", ch5);

    // Test cases for %s
    char *str1 = "Hello, world!";
    char *str2 = "This is a test.";
    char *str3 = "12345";
    char *str4 = "Special @#$ characters!";
    char *str5 = "";

    compare_outputs("Printf String 1: Hello, world!\n", "ft_printf String 1: %s\n", str1);
    compare_outputs("Printf String 2: This is a test.\n", "ft_printf String 2: %s\n", str2);
    compare_outputs("Printf String 3: 12345\n", "ft_printf String 3: %s\n", str3);
    compare_outputs("Printf String 4: Special @#$ characters!\n", "ft_printf String 4: %s\n", str4);
    compare_outputs("Printf String 5 (Empty): \n", "ft_printf String 5 (Empty): %s\n", str5);

    // Test cases for %p
    void *ptr1 = &ch1;
    void *ptr2 = &str1;
    void *ptr3 = NULL;
    void *ptr5 = &ch5;

    compare_outputs("Printf Pointer 1: 0x7ff7b48139bb\n", "ft_printf Pointer 1: %p\n", ptr1);
    compare_outputs("Printf Pointer 2: 0x7ff7b48139a8\n", "ft_printf Pointer 2: %p\n", ptr2);
    compare_outputs("Printf Pointer 3 (NULL): (nil)\n", "ft_printf Pointer 3 (NULL): %p\n", ptr3);
    compare_outputs("Printf Pointer 5: 0x7ff7b48139b7\n", "ft_printf Pointer 5: %p\n", ptr5);

    // Test cases for %d %i
    int num1 = 42;
    int num2 = -12345;
    int num3 = 0;
    int num4 = 987654321;
    int num5 = -987654321;

    compare_outputs("Printf Integer 1: 42\n", "ft_printf Integer 1: %d\n", num1);
    compare_outputs("Printf Integer 2: -12345\n", "ft_printf Integer 2: %i\n", num2);
    compare_outputs("Printf Integer 3: 0\n", "ft_printf Integer 3: %d\n", num3);
    compare_outputs("Printf Integer 4: 987654321\n", "ft_printf Integer 4: %i\n", num4);
    compare_outputs("Printf Integer 5: -987654321\n", "ft_printf Integer 5: %d\n", num5);

    // Test cases for %u
    unsigned int unsignedNum1 = 12345;
    unsigned int unsignedNum2 = 0;
    unsigned int unsignedNum3 = 4294967295; // Maximum unsigned int value
    unsigned int unsignedNum4 = 987654321;
    unsigned int unsignedNum5 = 999999999;

    compare_outputs("Printf Unsigned Integer 1: 12345\n", "ft_printf Unsigned Integer 1: %u\n", unsignedNum1);
    compare_outputs("Printf Unsigned Integer 2: 0\n", "ft_printf Unsigned Integer 2: %u\n", unsignedNum2);
    compare_outputs("Printf Unsigned Integer 3 (Max): 4294967295\n", "ft_printf Unsigned Integer 3 (Max): %u\n", unsignedNum3);
    compare_outputs("Printf Unsigned Integer 4: 987654321\n", "ft_printf Unsigned Integer 4: %u\n", unsignedNum4);
    compare_outputs("Printf Unsigned Integer 5: 999999999\n", "ft_printf Unsigned Integer 5: %u\n", unsignedNum5);

    // Test cases for %x and %X
    unsigned int hexNum1 = 255;
    unsigned int hexNum2 = 4096;
    unsigned int hexNum3 = 16;
    unsigned int hexNum4 = 0;
    unsigned int hexNum5 = 65535;

    compare_outputs("Printf Hexadecimal (lowercase) 1: ff\n", "ft_printf Hexadecimal (lowercase) 1: %x\n", hexNum1);
    compare_outputs("Printf Hexadecimal (lowercase) 2: 1000\n", "ft_printf Hexadecimal (lowercase) 2: %x\n", hexNum2);
    compare_outputs("Printf Hexadecimal (lowercase) 3: 10\n", "ft_printf Hexadecimal (lowercase) 3: %x\n", hexNum3);
    compare_outputs("Printf Hexadecimal (lowercase) 4: 0\n", "ft_printf Hexadecimal (lowercase) 4: %x\n", hexNum4);
    compare_outputs("Printf Hexadecimal (lowercase) 5: ffff\n", "ft_printf Hexadecimal (lowercase) 5: %x\n", hexNum5);
    compare_outputs("Printf Hexadecimal (uppercase) 1: FF\n", "ft_printf Hexadecimal (uppercase) 1: %X\n", hexNum1);
    compare_outputs("Printf Hexadecimal (uppercase) 2: 1000\n", "ft_printf Hexadecimal (uppercase) 2: %X\n", hexNum2);
    compare_outputs("Printf Hexadecimal (uppercase) 3: 10\n", "ft_printf Hexadecimal (uppercase) 3: %X\n", hexNum3);
    compare_outputs("Printf Hexadecimal (uppercase) 4: 0\n", "ft_printf Hexadecimal (uppercase) 4: %X\n", hexNum4);
    compare_outputs("Printf Hexadecimal (uppercase) 5: FFFF\n", "ft_printf Hexadecimal (uppercase) 5: %X\n", hexNum5);

    // Test case for %%
    compare_outputs("Printf Percentage Sign: %%\n", "ft_printf Percentage Sign: %%\n");
    printf("Printf Percentage Sign: %%\n"); // for printf
    ft_printf("ft_printf Percentage Sign: %%\n"); // for ft_printf
    // Test all  
    compare_outputs("Printf All Check: Char: A, String: Hello, world!, Pointer: 0x7ff7b48139bb, Int (Decimal): 42, Unsigned Int: 12345, Hex (Lowercase): ff, Hex (Uppercase): FF\n",
                "ft_printf All Check: Char: A, String: Hello, world!, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n",
                &ch1, 42, 12345, 255, 255);
    compare_outputs("Printf All Check 2: Char: Z, String: Testing 123, Pointer: 0x7ff7b48139ba, Int (Decimal): -12345, Unsigned Int: 0, Hex (Lowercase): 1000, Hex (Uppercase): 1000\n",
                    "ft_printf All Check 2: Char: Z, String: Testing 123, Pointer: %p, Int (Decimal): %i, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n",
                    &ch2, -12345, 0, 4096, 4096);
    compare_outputs("Printf All Check 3: Char: 9, String: Special @#$ characters!, Pointer: 0x7ff7b48139b9, Int (Decimal): 2147483647, Unsigned Int: 4294967295, Hex (Lowercase): 10, Hex (Uppercase): 10\n",
                    "ft_printf All Check 3: Char: 9, String: Special @#$ characters!, Pointer: %p, Int (Decimal): %d, Unsigned Int: %u, Hex (Lowercase): %x, Hex (Uppercase): %X\n",
                    &ch3, INT_MAX, UINT_MAX, 16, 16);

    return 0;
}
