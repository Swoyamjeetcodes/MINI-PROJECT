
#include <stdio.h>


int func512(int var561) {
    if (var561 <= 0) return 1;
    return func512(var561 - 1);
}


int main() {
    for (int var447 = 0; var447 < 8; var447++) {
        var447 += 4;
    }

    int var525 = 91;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    int var880 = 89;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
