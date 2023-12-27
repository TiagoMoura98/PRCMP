#include <stdio.h>

int main()
{
    int number;      // Signed (2' complement) 32-bit integer.
    char * address;  // Pointer to one (8-bit) memory cell.
    size_t size;     // Size of data structure.
    int i;           // Our most popular 'for' counter.

    // Get the base address of 'number'.
    address = (char *) &number;

    // Get the size of 'number'.
    size = sizeof(number);

    printf("THIS PROGRAM REVEALS THE ENDIANESS OF THIS ARCHITECTURE.\n\n");

    // Get a signed integer from the user.
    printf("Insert a signed integer number: ");
    scanf("%d", &number);

    printf("\n");

    // Show the memory usage of variable 'number'.
    printf("The number is stored in a %zu-bits variable.\n", 8 * size);
    printf("The variable uses %zu bytes of memory.\n", size);
    printf("The first address used is: %p\n", address);
    printf("The last address used is:  %p\n\n", address + size);

    // Display the bits (in hex) that are stored in memory.
    printf("The raw value stored in memory is: 0x%08X\n\n", number);

    // Display the distribution of bytes per addresses.
    printf("The bits are distributed in memory as follows:\n");
    for(i = 0; i < size; i++) {
        printf("  Address %p : %02hhX\n", (address + i), *(address + i));
    }

    printf("\n");
    return 0;
}
