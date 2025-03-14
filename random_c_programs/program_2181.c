
#include <stdio.h>


int func876(int var419) {
    if (var419 <= 0) return 1;
    return func876(var419 - 1);
}


int main() {
    for (int var514 = 0; var514 < 5; var514++) {
        var514 += 2;
    }

    int var86 = 3;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
