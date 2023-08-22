#include "main.h"

char *_strcat(char *dest, char *src) {
    char *originalDest = dest; // Store the original destination pointer
    
    // Move the dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the src string to the end of the destination string
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0'; // Add null-terminator to the concatenated string
    return originalDest; // Return the original destination pointer
}
