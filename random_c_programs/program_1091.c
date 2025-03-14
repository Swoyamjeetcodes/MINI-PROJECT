
#include <stdio.h>


int func871(int var691) {
    if (var691 <= 0) return 1;
    return func871(var691 - 1);
}


int main() {
    for (int var167 = 0; var167 < 8; var167++) {
        var167 += 1;
    }

    int var658 = 7;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
