
#include <stdio.h>


int func884(int var200) {
    if (var200 <= 0) return 1;
    return func884(var200 - 1);
}


int main() {
    for (int var381 = 0; var381 < 17; var381++) {
        var381 += 1;
    }

    int var779 = 63;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
