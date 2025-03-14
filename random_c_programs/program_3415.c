
#include <stdio.h>


int func383(int var980) {
    if (var980 <= 0) return 1;
    return func383(var980 - 1);
}


int main() {
    for (int var649 = 0; var649 < 13; var649++) {
        var649 += 4;
    }

    int var658 = 92;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
