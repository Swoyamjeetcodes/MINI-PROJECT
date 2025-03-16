
#include <stdio.h>


int func733(int var8) {
    if (var8 <= 0) return 1;
    return func733(var8 - 1);
}


int main() {
    int var283 = 0;
    while (var283 < 16) {
        var283 += 4;
        var283++;
    }    for (int var16 = 0; var16 < 16; var16++) {
        var16 += 5;
    }

    int var251 = 73;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    return 0;
}
