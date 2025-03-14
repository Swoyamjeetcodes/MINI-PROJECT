
#include <stdio.h>


int func771(int var14) {
    if (var14 <= 0) return 1;
    return func771(var14 - 1);
}


int main() {
    for (int var698 = 0; var698 < 18; var698++) {
        var698 += 2;
    }

    int var635 = 62;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    return 0;
}
