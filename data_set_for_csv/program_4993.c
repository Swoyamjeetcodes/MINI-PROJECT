
#include <stdio.h>


int func607(int var71) {
    if (var71 <= 0) return 1;
    return func607(var71 - 1);
}


int main() {
    int var129 = 0;
    while (var129 < 5) {
        var129 += 1;
        var129++;
    }    for (int var789 = 0; var789 < 17; var789++) {
        var789 += 2;
    }    for (int var192 = 0; var192 < 6; var192++) {
        var192 += 4;
    }

    int var918 = 79;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    int var929 = 47;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    int var320 = 48;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    return 0;
}
