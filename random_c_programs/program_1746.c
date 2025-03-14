
#include <stdio.h>


int func756(int var120) {
    if (var120 <= 0) return 1;
    return func756(var120 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 16) {
        var540 += 5;
        var540++;
    }

    int var513 = 4;
    if (var513 % 2 == 0) {
        printf("var513 is even\n");
    } else {
        printf("var513 is odd\n");
    }

    return 0;
}
