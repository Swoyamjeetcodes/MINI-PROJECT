
#include <stdio.h>


int func85(int var297) {
    if (var297 <= 0) return 1;
    return func85(var297 - 1);
}


int main() {
    for (int var566 = 0; var566 < 20; var566++) {
        var566 += 4;
    }

    int var711 = 55;
    if (var711 % 2 == 0) {
        printf("var711 is even\n");
    } else {
        printf("var711 is odd\n");
    }

    return 0;
}
