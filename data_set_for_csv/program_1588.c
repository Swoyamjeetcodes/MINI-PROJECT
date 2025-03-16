
#include <stdio.h>


int func655(int var878) {
    if (var878 <= 0) return 1;
    return func655(var878 - 1);
}


int main() {
    for (int var840 = 0; var840 < 12; var840++) {
        var840 += 4;
    }

    int var652 = 35;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
