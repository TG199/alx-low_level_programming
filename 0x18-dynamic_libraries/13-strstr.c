#include "main.h"

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        
        // Check if the substring matches starting from haystack
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        
        // If the entire needle was found, return the starting position
        if (*n == '\0') {
            return haystack;
        }
        
        haystack++;
    }
    return NULL; // Substring not found
}
