#include "main.h"

char *_strncpy(char *dest, char *src, int n) {
    char *originalDest = dest; // Store the original destination pointer
    
    // Copy at most 'n' characters from the src string
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    // Fill remaining characters with null bytes if necessary
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }
    
    return originalDest; // Return the original destination pointer
}
