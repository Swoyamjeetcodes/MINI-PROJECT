
#include <stdio.h>


int func567(int var417) {
    if (var417 <= 0) return 1;
    return func567(var417 - 1);
}


int main() {
    for (int var583 = 0; var583 < 20; var583++) {
        var583 += 4;
    }

    int var59 = 10;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
