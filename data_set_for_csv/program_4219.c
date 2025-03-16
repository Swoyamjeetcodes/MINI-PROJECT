
#include <stdio.h>


int func361(int var491) {
    if (var491 <= 0) return 1;
    return func361(var491 - 1);
}


int main() {
    for (int var31 = 0; var31 < 18; var31++) {
        var31 += 2;
    }

    int var18 = 13;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    return 0;
}
