
#include <stdio.h>


int func877(int var147) {
    if (var147 <= 0) return 1;
    return func877(var147 - 1);
}


int main() {
    for (int var661 = 0; var661 < 18; var661++) {
        var661 += 1;
    }

    int var875 = 69;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
