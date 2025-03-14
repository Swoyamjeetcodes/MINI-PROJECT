
#include <stdio.h>


int func420(int var967) {
    if (var967 <= 0) return 1;
    return func420(var967 - 1);
}


int main() {
    for (int var45 = 0; var45 < 16; var45++) {
        var45 += 5;
    }

    int var606 = 29;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    int var705 = 44;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
