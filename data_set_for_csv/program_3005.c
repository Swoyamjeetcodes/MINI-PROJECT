
#include <stdio.h>


int func660(int var531) {
    if (var531 <= 0) return 1;
    return func660(var531 - 1);
}


int main() {
    for (int var527 = 0; var527 < 18; var527++) {
        var527 += 1;
    }

    int var583 = 23;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}
