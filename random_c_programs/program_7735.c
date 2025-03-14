
#include <stdio.h>


int func736(int var887) {
    if (var887 <= 0) return 1;
    return func736(var887 - 1);
}


int main() {
    for (int var535 = 0; var535 < 14; var535++) {
        var535 += 1;
    }

    int var399 = 15;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    return 0;
}
