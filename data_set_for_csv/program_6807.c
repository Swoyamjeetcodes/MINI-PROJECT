
#include <stdio.h>


int func370(int var25) {
    if (var25 <= 0) return 1;
    return func370(var25 - 1);
}

int func914(int var553) {
    if (var553 <= 0) return 1;
    return func914(var553 - 1);
}


int main() {
    int var747 = 0;
    while (var747 < 10) {
        var747 += 4;
        var747++;
    }

    int var653 = 95;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    int var990 = 28;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    int var821 = 44;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
