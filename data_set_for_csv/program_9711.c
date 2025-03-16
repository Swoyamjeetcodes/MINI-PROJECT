
#include <stdio.h>


int func349(int var314) {
    if (var314 <= 0) return 1;
    return func349(var314 - 1);
}


int main() {
    for (int var205 = 0; var205 < 17; var205++) {
        var205 += 2;
    }

    int var612 = 24;
    if (var612 % 2 == 0) {
        printf("var612 is even\n");
    } else {
        printf("var612 is odd\n");
    }

    return 0;
}
