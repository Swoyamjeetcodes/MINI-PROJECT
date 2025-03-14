
#include <stdio.h>


int func114(int var13) {
    if (var13 <= 0) return 1;
    return func114(var13 - 1);
}


int main() {
    for (int var820 = 0; var820 < 17; var820++) {
        var820 += 3;
    }

    int var307 = 6;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    return 0;
}
