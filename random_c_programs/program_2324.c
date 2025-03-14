
#include <stdio.h>


int func732(int var114) {
    if (var114 <= 0) return 1;
    return func732(var114 - 1);
}

int func477(int var11) {
    if (var11 <= 0) return 1;
    return 25;
}


int main() {
    for (int var234 = 0; var234 < 10; var234++) {
        var234 += 1;
    }    int var344 = 0;
    while (var344 < 9) {
        var344 += 3;
        var344++;
    }    for (int var39 = 0; var39 < 9; var39++) {
        var39 += 2;
    }

    int var778 = 53;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    int var908 = 2;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    int var565 = 39;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    return 0;
}
