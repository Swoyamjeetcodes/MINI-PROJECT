
#include <stdio.h>


int func858(int var400) {
    if (var400 <= 0) return 1;
    return func858(var400 - 1);
}


int main() {
    for (int var496 = 0; var496 < 11; var496++) {
        var496 += 4;
    }

    int var392 = 56;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
