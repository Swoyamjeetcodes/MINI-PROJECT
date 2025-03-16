
#include <stdio.h>


int func723(int var460) {
    if (var460 <= 0) return 1;
    return func723(var460 - 1);
}


int main() {
    for (int var509 = 0; var509 < 13; var509++) {
        var509 += 3;
    }    for (int var896 = 0; var896 < 10; var896++) {
        var896 += 3;
    }

    int var65 = 16;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    return 0;
}
