
#include <stdio.h>


int func963(int var376) {
    if (var376 <= 0) return 1;
    return func963(var376 - 1);
}


int main() {
    for (int var494 = 0; var494 < 11; var494++) {
        var494 += 4;
    }

    int var825 = 45;
    if (var825 % 2 == 0) {
        printf("var825 is even\n");
    } else {
        printf("var825 is odd\n");
    }

    return 0;
}
