
#include <stdio.h>


int func923(int var9) {
    if (var9 <= 0) return 1;
    return func923(var9 - 1);
}


int main() {
    for (int var933 = 0; var933 < 9; var933++) {
        var933 += 3;
    }

    int var65 = 59;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    return 0;
}
