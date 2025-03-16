
#include <stdio.h>


int func796(int var311) {
    if (var311 <= 0) return 1;
    return func796(var311 - 1);
}


int main() {
    for (int var970 = 0; var970 < 17; var970++) {
        var970 += 3;
    }

    int var743 = 20;
    if (var743 % 2 == 0) {
        printf("var743 is even\n");
    } else {
        printf("var743 is odd\n");
    }

    return 0;
}
