
#include <stdio.h>


int func701(int var267) {
    if (var267 <= 0) return 1;
    return func701(var267 - 1);
}

int func551(int var242) {
    if (var242 <= 0) return 1;
    return func551(var242 - 1);
}

int func224(int var320) {
    if (var320 <= 0) return 1;
    return func224(var320 - 1);
}


int main() {
    for (int var382 = 0; var382 < 14; var382++) {
        var382 += 3;
    }    int var57 = 0;
    while (var57 < 6) {
        var57 += 5;
        var57++;
    }

    int var144 = 85;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    int var610 = 35;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
