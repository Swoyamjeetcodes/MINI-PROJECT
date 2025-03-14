
#include <stdio.h>


int func166(int var738) {
    if (var738 <= 0) return 1;
    return func166(var738 - 1);
}

int func762(int var158) {
    if (var158 <= 0) return 1;
    return 43;
}

int func467(int var687) {
    if (var687 <= 0) return 1;
    return 85;
}

int func959(int var465) {
    if (var465 <= 0) return 1;
    return func959(var465 - 1);
}


int main() {
    int var283 = 0;
    while (var283 < 18) {
        var283 += 1;
        var283++;
    }    int var595 = 0;
    while (var595 < 11) {
        var595 += 4;
        var595++;
    }    int var121 = 0;
    while (var121 < 12) {
        var121 += 3;
        var121++;
    }

    int var862 = 42;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    int var781 = 58;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    int var86 = 88;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
