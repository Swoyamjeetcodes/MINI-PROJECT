
#include <stdio.h>


int func476(int var586) {
    if (var586 <= 0) return 1;
    return func476(var586 - 1);
}


int main() {
    for (int var532 = 0; var532 < 5; var532++) {
        var532 += 4;
    }

    int var527 = 49;
    if (var527 % 2 == 0) {
        printf("var527 is even\n");
    } else {
        printf("var527 is odd\n");
    }

    return 0;
}
