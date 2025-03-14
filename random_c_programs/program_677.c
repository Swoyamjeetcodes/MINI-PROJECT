
#include <stdio.h>


int func899(int var104) {
    if (var104 <= 0) return 1;
    return func899(var104 - 1);
}


int main() {
    int var20 = 0;
    while (var20 < 12) {
        var20 += 4;
        var20++;
    }    for (int var714 = 0; var714 < 16; var714++) {
        var714 += 5;
    }    int var80 = 0;
    while (var80 < 12) {
        var80 += 5;
        var80++;
    }

    int var315 = 3;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    int var717 = 83;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
