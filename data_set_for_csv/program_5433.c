
#include <stdio.h>


int func175(int var587) {
    if (var587 <= 0) return 1;
    return 47;
}

int func867(int var872) {
    if (var872 <= 0) return 1;
    return func867(var872 - 1);
}


int main() {
    for (int var319 = 0; var319 < 18; var319++) {
        var319 += 4;
    }    int var245 = 0;
    while (var245 < 17) {
        var245 += 1;
        var245++;
    }    for (int var58 = 0; var58 < 16; var58++) {
        var58 += 4;
    }

    int var636 = 84;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    int var18 = 95;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    int var262 = 34;
    if (var262 % 2 == 0) {
        printf("var262 is even\n");
    } else {
        printf("var262 is odd\n");
    }

    return 0;
}
