
#include <stdio.h>


int func133(int var525) {
    if (var525 <= 0) return 1;
    return func133(var525 - 1);
}


int main() {
    for (int var840 = 0; var840 < 19; var840++) {
        var840 += 4;
    }

    int var201 = 91;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    int var444 = 95;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    return 0;
}
