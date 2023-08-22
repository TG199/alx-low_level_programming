#include "main.h"

int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // Return 1 if the character is an alphabet letter
    } else {
        return 0; // Return 0 if the character is not an alphabet letter
    }
}
