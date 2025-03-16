
#include <stdio.h>


int func683(int var385) {
    if (var385 <= 0) return 1;
    return func683(var385 - 1);
}


int main() {
    for (int var480 = 0; var480 < 5; var480++) {
        var480 += 4;
    }

    int var112 = 74;
    if (var112 % 2 == 0) {
        printf("var112 is even\n");
    } else {
        printf("var112 is odd\n");
    }

    return 0;
}
