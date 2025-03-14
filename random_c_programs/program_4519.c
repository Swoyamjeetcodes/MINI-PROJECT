
#include <stdio.h>


int func548(int var433) {
    if (var433 <= 0) return 1;
    return func548(var433 - 1);
}


int main() {
    for (int var883 = 0; var883 < 6; var883++) {
        var883 += 2;
    }

    int var440 = 73;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}
