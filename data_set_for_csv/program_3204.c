
#include <stdio.h>


int func250(int var461) {
    if (var461 <= 0) return 1;
    return func250(var461 - 1);
}


int main() {
    int var288 = 0;
    while (var288 < 6) {
        var288 += 3;
        var288++;
    }    int var379 = 0;
    while (var379 < 12) {
        var379 += 5;
        var379++;
    }

    int var921 = 89;
    if (var921 % 2 == 0) {
        printf("var921 is even\n");
    } else {
        printf("var921 is odd\n");
    }

    return 0;
}
