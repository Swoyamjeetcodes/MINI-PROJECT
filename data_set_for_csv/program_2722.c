
#include <stdio.h>


int func505(int var951) {
    if (var951 <= 0) return 1;
    return func505(var951 - 1);
}


int main() {
    for (int var548 = 0; var548 < 16; var548++) {
        var548 += 4;
    }

    int var34 = 16;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    return 0;
}
