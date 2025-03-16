
#include <stdio.h>


int func341(int var86) {
    if (var86 <= 0) return 1;
    return func341(var86 - 1);
}


int main() {
    for (int var400 = 0; var400 < 7; var400++) {
        var400 += 2;
    }

    int var279 = 88;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
