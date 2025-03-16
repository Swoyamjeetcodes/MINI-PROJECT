
#include <stdio.h>


int func386(int var874) {
    if (var874 <= 0) return 1;
    return func386(var874 - 1);
}


int main() {
    for (int var388 = 0; var388 < 20; var388++) {
        var388 += 1;
    }

    int var714 = 48;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
