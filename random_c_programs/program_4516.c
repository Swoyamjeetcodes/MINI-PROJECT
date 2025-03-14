
#include <stdio.h>


int func819(int var948) {
    if (var948 <= 0) return 1;
    return func819(var948 - 1);
}


int main() {
    for (int var98 = 0; var98 < 17; var98++) {
        var98 += 5;
    }

    int var125 = 92;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
