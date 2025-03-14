
#include <stdio.h>


int func206(int var500) {
    if (var500 <= 0) return 1;
    return func206(var500 - 1);
}


int main() {
    int var164 = 0;
    while (var164 < 8) {
        var164 += 4;
        var164++;
    }

    int var960 = 38;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
