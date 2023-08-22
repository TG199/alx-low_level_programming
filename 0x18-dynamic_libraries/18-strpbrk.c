#include "main.h"

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *a = accept;
        while (*a != '\0') {
            if (*s == *a) {
                return s; // Return the pointer to the first matching character
            }
            a++;
        }
        s++;
    }
    return NULL; // No matching character found
}
