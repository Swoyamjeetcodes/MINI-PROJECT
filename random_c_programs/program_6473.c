
#include <stdio.h>


int func900(int var396) {
    if (var396 <= 0) return 1;
    return func900(var396 - 1);
}


int main() {
    for (int var511 = 0; var511 < 13; var511++) {
        var511 += 3;
    }

    int var500 = 78;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    return 0;
}
