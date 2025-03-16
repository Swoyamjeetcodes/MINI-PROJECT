
#include <stdio.h>


int func512(int var589) {
    if (var589 <= 0) return 1;
    return func512(var589 - 1);
}


int main() {
    for (int var711 = 0; var711 < 7; var711++) {
        var711 += 5;
    }

    int var948 = 35;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    return 0;
}
