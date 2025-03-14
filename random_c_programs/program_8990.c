
#include <stdio.h>


int func626(int var871) {
    if (var871 <= 0) return 1;
    return func626(var871 - 1);
}


int main() {
    for (int var495 = 0; var495 < 11; var495++) {
        var495 += 4;
    }

    int var540 = 52;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
