
#include <stdio.h>


int func247(int var711) {
    if (var711 <= 0) return 1;
    return func247(var711 - 1);
}


int main() {
    for (int var269 = 0; var269 < 8; var269++) {
        var269 += 4;
    }

    int var935 = 15;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
