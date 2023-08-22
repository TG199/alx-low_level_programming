#include "main.h"

int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    // Handle optional sign
    if (*s == '-') {
        sign = -1;
        s++;
    }

    // Convert characters to integer until non-digit encountered
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
