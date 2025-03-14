
#include <stdio.h>


int func157(int var592) {
    if (var592 <= 0) return 1;
    return func157(var592 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 6) {
        var353 += 5;
        var353++;
    }

    int var489 = 71;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    return 0;
}
