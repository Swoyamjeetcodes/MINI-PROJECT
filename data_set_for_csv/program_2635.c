
#include <stdio.h>


int func150(int var690) {
    if (var690 <= 0) return 1;
    return func150(var690 - 1);
}


int main() {
    for (int var204 = 0; var204 < 19; var204++) {
        var204 += 5;
    }

    int var636 = 93;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
