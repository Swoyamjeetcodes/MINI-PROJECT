
#include <stdio.h>


int func638(int var615) {
    if (var615 <= 0) return 1;
    return func638(var615 - 1);
}


int main() {
    for (int var458 = 0; var458 < 6; var458++) {
        var458 += 2;
    }

    int var883 = 39;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    return 0;
}
