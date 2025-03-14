
#include <stdio.h>


int func81(int var769) {
    if (var769 <= 0) return 1;
    return func81(var769 - 1);
}


int main() {
    for (int var217 = 0; var217 < 20; var217++) {
        var217 += 4;
    }

    int var338 = 63;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    return 0;
}
