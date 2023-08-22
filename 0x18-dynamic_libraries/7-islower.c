#include "main.h"

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1; // Return 1 if the character is lowercase
    } else {
        return 0; // Return 0 if the character is not lowercase
    }
}
