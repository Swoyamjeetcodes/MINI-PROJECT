
#include <stdio.h>


int func655(int var811) {
    if (var811 <= 0) return 1;
    return func655(var811 - 1);
}


int main() {
    for (int var636 = 0; var636 < 6; var636++) {
        var636 += 1;
    }

    int var338 = 62;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    return 0;
}
