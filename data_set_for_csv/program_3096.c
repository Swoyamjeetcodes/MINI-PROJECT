
#include <stdio.h>


int func705(int var118) {
    if (var118 <= 0) return 1;
    return func705(var118 - 1);
}

int func996(int var775) {
    if (var775 <= 0) return 1;
    return func996(var775 - 1);
}


int main() {
    int var266 = 0;
    while (var266 < 18) {
        var266 += 1;
        var266++;
    }

    int var837 = 29;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    int var947 = 67;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    int var911 = 4;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    int var26 = 89;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    int var662 = 42;
    if (var662 % 2 == 0) {
        printf("var662 is even\n");
    } else {
        printf("var662 is odd\n");
    }

    return 0;
}
