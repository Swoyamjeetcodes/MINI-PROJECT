
#include <stdio.h>


int func49(int var820) {
    if (var820 <= 0) return 1;
    return func49(var820 - 1);
}


int main() {
    for (int var314 = 0; var314 < 5; var314++) {
        var314 += 1;
    }

    int var49 = 36;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
