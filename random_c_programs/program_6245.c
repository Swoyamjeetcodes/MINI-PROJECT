
#include <stdio.h>


int func688(int var612) {
    if (var612 <= 0) return 1;
    return func688(var612 - 1);
}

int func916(int var911) {
    if (var911 <= 0) return 1;
    return func916(var911 - 1);
}


int main() {
    int var763 = 0;
    while (var763 < 8) {
        var763 += 5;
        var763++;
    }    int var365 = 0;
    while (var365 < 17) {
        var365 += 1;
        var365++;
    }    int var669 = 0;
    while (var669 < 16) {
        var669 += 2;
        var669++;
    }    int var619 = 0;
    while (var619 < 6) {
        var619 += 3;
        var619++;
    }    for (int var511 = 0; var511 < 10; var511++) {
        var511 += 2;
    }    int var787 = 0;
    while (var787 < 8) {
        var787 += 5;
        var787++;
    }    for (int var813 = 0; var813 < 6; var813++) {
        var813 += 2;
    }

    int var102 = 33;
    if (var102 % 2 == 0) {
        printf("var102 is even\n");
    } else {
        printf("var102 is odd\n");
    }

    int var572 = 6;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var564 = 79;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    int var144 = 7;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
