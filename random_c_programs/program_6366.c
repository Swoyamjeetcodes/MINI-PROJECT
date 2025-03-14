
#include <stdio.h>


int func159(int var408) {
    if (var408 <= 0) return 1;
    return func159(var408 - 1);
}


int main() {
    for (int var780 = 0; var780 < 11; var780++) {
        var780 += 3;
    }

    int var368 = 97;
    if (var368 % 2 == 0) {
        printf("var368 is even\n");
    } else {
        printf("var368 is odd\n");
    }

    return 0;
}
