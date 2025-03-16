
#include <stdio.h>


int func773(int var782) {
    if (var782 <= 0) return 1;
    return func773(var782 - 1);
}


int main() {
    for (int var493 = 0; var493 < 17; var493++) {
        var493 += 1;
    }

    int var844 = 63;
    if (var844 % 2 == 0) {
        printf("var844 is even\n");
    } else {
        printf("var844 is odd\n");
    }

    return 0;
}
