
#include <stdio.h>


int func276(int var96) {
    if (var96 <= 0) return 1;
    return func276(var96 - 1);
}


int main() {
    for (int var761 = 0; var761 < 17; var761++) {
        var761 += 3;
    }

    int var391 = 47;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
