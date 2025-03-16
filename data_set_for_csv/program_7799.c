
#include <stdio.h>


int func795(int var196) {
    if (var196 <= 0) return 1;
    return func795(var196 - 1);
}

int func835(int var195) {
    if (var195 <= 0) return 1;
    return func835(var195 - 1);
}


int main() {
    int var501 = 0;
    while (var501 < 16) {
        var501 += 1;
        var501++;
    }

    int var504 = 64;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    int var329 = 23;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var253 = 36;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
