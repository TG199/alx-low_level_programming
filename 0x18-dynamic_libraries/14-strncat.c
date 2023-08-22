#include "main.h"

char *_strncat(char *dest, char *src, int n) {
    char *originalDest = dest; // Store the original destination pointer
    
    // Move the dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy at most 'n' characters from the src string
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    *dest = '\0'; // Add null-terminator to the concatenated string
    return originalDest; // Return the original destination pointer
}
