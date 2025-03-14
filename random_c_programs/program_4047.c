
#include <stdio.h>


int func837(int var309) {
    if (var309 <= 0) return 1;
    return func837(var309 - 1);
}


int main() {
    for (int var853 = 0; var853 < 11; var853++) {
        var853 += 3;
    }

    int var337 = 67;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    return 0;
}
