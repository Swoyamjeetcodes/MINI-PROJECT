
#include <stdio.h>


int func134(int var695) {
    if (var695 <= 0) return 1;
    return func134(var695 - 1);
}


int main() {
    int var970 = 0;
    while (var970 < 9) {
        var970 += 2;
        var970++;
    }

    int var853 = 8;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    return 0;
}
