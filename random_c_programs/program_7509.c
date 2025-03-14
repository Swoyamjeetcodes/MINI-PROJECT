
#include <stdio.h>


int func37(int var277) {
    if (var277 <= 0) return 1;
    return func37(var277 - 1);
}


int main() {
    for (int var666 = 0; var666 < 19; var666++) {
        var666 += 5;
    }

    int var595 = 86;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    return 0;
}
