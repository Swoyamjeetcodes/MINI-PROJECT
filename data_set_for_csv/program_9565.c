
#include <stdio.h>


int func158(int var448) {
    if (var448 <= 0) return 1;
    return func158(var448 - 1);
}


int main() {
    for (int var603 = 0; var603 < 13; var603++) {
        var603 += 4;
    }

    int var61 = 19;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
