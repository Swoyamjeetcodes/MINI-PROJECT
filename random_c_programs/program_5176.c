
#include <stdio.h>


int func307(int var45) {
    if (var45 <= 0) return 1;
    return func307(var45 - 1);
}


int main() {
    for (int var780 = 0; var780 < 10; var780++) {
        var780 += 1;
    }

    int var634 = 18;
    if (var634 % 2 == 0) {
        printf("var634 is even\n");
    } else {
        printf("var634 is odd\n");
    }

    return 0;
}
