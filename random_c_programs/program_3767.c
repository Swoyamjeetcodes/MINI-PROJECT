
#include <stdio.h>


int func366(int var529) {
    if (var529 <= 0) return 1;
    return func366(var529 - 1);
}


int main() {
    for (int var500 = 0; var500 < 5; var500++) {
        var500 += 3;
    }

    int var627 = 15;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    return 0;
}
