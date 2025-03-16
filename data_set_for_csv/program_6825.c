
#include <stdio.h>


int func10(int var143) {
    if (var143 <= 0) return 1;
    return func10(var143 - 1);
}


int main() {
    for (int var28 = 0; var28 < 8; var28++) {
        var28 += 4;
    }

    int var748 = 59;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
