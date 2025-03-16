
#include <stdio.h>


int func606(int var326) {
    if (var326 <= 0) return 1;
    return func606(var326 - 1);
}


int main() {
    int var107 = 0;
    while (var107 < 8) {
        var107 += 1;
        var107++;
    }

    int var649 = 63;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    return 0;
}
