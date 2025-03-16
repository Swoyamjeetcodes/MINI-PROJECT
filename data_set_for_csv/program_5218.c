
#include <stdio.h>


int func503(int var105) {
    if (var105 <= 0) return 1;
    return func503(var105 - 1);
}


int main() {
    for (int var394 = 0; var394 < 12; var394++) {
        var394 += 3;
    }    int var704 = 0;
    while (var704 < 6) {
        var704 += 4;
        var704++;
    }

    int var491 = 88;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    return 0;
}
