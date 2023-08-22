#include "main.h"

int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return *s1 - *s2; // Return the difference of the ASCII values
        }
        s1++;
        s2++;
    }
    
    // Strings are equal up to this point, check their lengths
    if (*s1 == '\0' && *s2 == '\0') {
        return 0; // Strings are identical
    } else if (*s1 == '\0') {
        return -1; // s1 is shorter than s2
    } else {
        return 1; // s2 is shorter than s1
    }
}
