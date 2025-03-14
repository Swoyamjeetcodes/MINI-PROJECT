
#include <stdio.h>


int func448(int var176) {
    if (var176 <= 0) return 1;
    return func448(var176 - 1);
}


int main() {
    for (int var612 = 0; var612 < 14; var612++) {
        var612 += 3;
    }

    int var696 = 20;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
