
#include <stdio.h>


int func21(int var432) {
    if (var432 <= 0) return 1;
    return func21(var432 - 1);
}


int main() {
    for (int var200 = 0; var200 < 18; var200++) {
        var200 += 3;
    }    int var327 = 0;
    while (var327 < 5) {
        var327 += 2;
        var327++;
    }

    int var943 = 73;
    if (var943 % 2 == 0) {
        printf("var943 is even\n");
    } else {
        printf("var943 is odd\n");
    }

    int var583 = 44;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}
