/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 02:09:20 by sfu               #+#    #+#             */
/*   Updated: 2023/12/27 02:14:04 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	test_case(int fd, const char *desc)
{
	char	*line;

	line = get_next_line(fd);
	printf("\n--- Test Case: %s ---\n", desc);
	while (line != NULL)
	{
		printf("Line: %s\n", line);
		free(line);
	}
	printf("--- End of Test Case ---\n");
}

int	main(void)
{
	// Test 1: Large BUFFER_SIZE (>1024)
	test_case(open("large_file.txt", O_RDONLY), "Large BUFFER_SIZE (>1024)");
	// Test 2: Small BUFFER_SIZE (< 8, and 1)
	test_case(open("small_file.txt", O_RDONLY), "Small BUFFER_SIZE (< 8, and 1)");
	// Test 3: BUFFER_SIZE exactly the length of the line to read
	test_case(open("buffer_size_file.txt", O_RDONLY), "BUFFER_SIZE exactly the length of the line to read");
	// Test 4: 1 byte variant (+/-) between the line and the BUFFER_SIZE
	test_case(open("one_byte_variant_file.txt", O_RDONLY), "1 byte variant (+/-) between the line and the BUFFER_SIZE");
	// Test 5: Read on stdin
	test_case(0, "Read on stdin");
	// Test 6: Read from a file
	test_case(open("test.txt", O_RDONLY), "Read from a file");
	// Test 7: (Multiple/Single) Long line (2k+ characters)
	test_case(open("long_line.txt", O_RDONLY), "(Multiple/Single) Long line (2k+ characters)");
	// Test 8: (Multiple/Single) Short line (< 4 characters, even 1)
	test_case(open("short_line.txt", O_RDONLY), "(Multiple/Single) Short line (< 4 characters, even 1)");
	// Test 9: (Multiple/Single) Empty line
	test_case(open("empty_line.txt", O_RDONLY), "(Multiple/Single) Empty line");
	return (0);
}
