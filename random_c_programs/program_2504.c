
#include <stdio.h>


int func324(int var868) {
    if (var868 <= 0) return 1;
    return func324(var868 - 1);
}


int main() {
    for (int var378 = 0; var378 < 16; var378++) {
        var378 += 1;
    }

    int var307 = 99;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    return 0;
}
