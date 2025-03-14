
#include <stdio.h>


int func655(int var100) {
    if (var100 <= 0) return 1;
    return func655(var100 - 1);
}


int main() {
    for (int var753 = 0; var753 < 17; var753++) {
        var753 += 2;
    }

    int var307 = 12;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    return 0;
}
