
#include <stdio.h>


int func552(int var125) {
    if (var125 <= 0) return 1;
    return func552(var125 - 1);
}

int func144(int var320) {
    if (var320 <= 0) return 1;
    return func144(var320 - 1);
}


int main() {
    for (int var245 = 0; var245 < 8; var245++) {
        var245 += 4;
    }    for (int var712 = 0; var712 < 13; var712++) {
        var712 += 1;
    }    int var769 = 0;
    while (var769 < 11) {
        var769 += 4;
        var769++;
    }

    int var49 = 24;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    int var738 = 69;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    int var642 = 73;
    if (var642 % 2 == 0) {
        printf("var642 is even\n");
    } else {
        printf("var642 is odd\n");
    }

    return 0;
}
