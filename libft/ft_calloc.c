#include "libft.h"

	void    *ft_calloc(size_t num_elements, size_t element_size)
{
    size_t  total_size = num_elements * element_size;
    void    *ptr;

    ptr = malloc(total_size);
    if(ptr == NULL)
        return (NULL); 
    ft_memset(ptr, 0, total_size);
    return(ptr);
}
/*
int main() {
    // Example usage of my_calloc
    int* arr = (int*)ft_calloc(5, sizeof(int));

    if (arr == NULL) {
        // Handle allocation failure here
        return 1;
    }

    // Print the values in the array (should be initialized to zero)
    for (size_t i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Clean up by freeing the allocated memory
    free(arr);

    return 0;
}*/
