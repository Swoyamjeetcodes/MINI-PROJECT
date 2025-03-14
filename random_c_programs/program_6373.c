
#include <stdio.h>


int func260(int var460) {
    if (var460 <= 0) return 1;
    return func260(var460 - 1);
}


int main() {
    for (int var360 = 0; var360 < 8; var360++) {
        var360 += 2;
    }

    int var530 = 40;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    return 0;
}
