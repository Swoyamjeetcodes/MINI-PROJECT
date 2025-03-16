
#include <stdio.h>


int func252(int var324) {
    if (var324 <= 0) return 1;
    return func252(var324 - 1);
}


int main() {
    int var955 = 0;
    while (var955 < 12) {
        var955 += 4;
        var955++;
    }    int var590 = 0;
    while (var590 < 9) {
        var590 += 4;
        var590++;
    }

    int var370 = 2;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    return 0;
}
