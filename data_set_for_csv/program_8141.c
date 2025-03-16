
#include <stdio.h>


int func529(int var934) {
    if (var934 <= 0) return 1;
    return func529(var934 - 1);
}


int main() {
    int var381 = 0;
    while (var381 < 8) {
        var381 += 4;
        var381++;
    }

    int var340 = 32;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    return 0;
}
