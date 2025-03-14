
#include <stdio.h>


int func830(int var835) {
    if (var835 <= 0) return 1;
    return func830(var835 - 1);
}


int main() {
    for (int var48 = 0; var48 < 15; var48++) {
        var48 += 5;
    }

    int var408 = 23;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    return 0;
}
