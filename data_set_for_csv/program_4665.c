
#include <stdio.h>


int func576(int var527) {
    if (var527 <= 0) return 1;
    return func576(var527 - 1);
}


int main() {
    for (int var769 = 0; var769 < 13; var769++) {
        var769 += 5;
    }

    int var489 = 4;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    return 0;
}
