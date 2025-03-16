
#include <stdio.h>


int func468(int var395) {
    if (var395 <= 0) return 1;
    return func468(var395 - 1);
}


int main() {
    for (int var788 = 0; var788 < 5; var788++) {
        var788 += 4;
    }

    int var593 = 100;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
