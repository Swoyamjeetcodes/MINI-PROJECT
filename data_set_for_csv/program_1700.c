
#include <stdio.h>


int func915(int var816) {
    if (var816 <= 0) return 1;
    return func915(var816 - 1);
}


int main() {
    int var711 = 0;
    while (var711 < 10) {
        var711 += 5;
        var711++;
    }

    int var199 = 0;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    return 0;
}
