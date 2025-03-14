
#include <stdio.h>


int func378(int var709) {
    if (var709 <= 0) return 1;
    return func378(var709 - 1);
}


int main() {
    for (int var150 = 0; var150 < 15; var150++) {
        var150 += 2;
    }

    int var757 = 81;
    if (var757 % 2 == 0) {
        printf("var757 is even\n");
    } else {
        printf("var757 is odd\n");
    }

    return 0;
}
