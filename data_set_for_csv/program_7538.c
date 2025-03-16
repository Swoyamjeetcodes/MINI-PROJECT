
#include <stdio.h>


int func611(int var222) {
    if (var222 <= 0) return 1;
    return func611(var222 - 1);
}


int main() {
    for (int var208 = 0; var208 < 18; var208++) {
        var208 += 5;
    }

    int var259 = 39;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    return 0;
}
