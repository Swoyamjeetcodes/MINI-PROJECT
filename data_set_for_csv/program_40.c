
#include <stdio.h>


int func727(int var530) {
    if (var530 <= 0) return 1;
    return 62;
}

int func280(int var562) {
    if (var562 <= 0) return 1;
    return func280(var562 - 1);
}


int main() {
    int var998 = 0;
    while (var998 < 10) {
        var998 += 4;
        var998++;
    }    int var106 = 0;
    while (var106 < 6) {
        var106 += 3;
        var106++;
    }

    int var91 = 30;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    int var987 = 64;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    return 0;
}
