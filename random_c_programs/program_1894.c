
#include <stdio.h>


int func281(int var176) {
    if (var176 <= 0) return 1;
    return func281(var176 - 1);
}


int main() {
    for (int var630 = 0; var630 < 5; var630++) {
        var630 += 2;
    }

    int var347 = 45;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
