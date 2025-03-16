
#include <stdio.h>


int func110(int var265) {
    if (var265 <= 0) return 1;
    return func110(var265 - 1);
}


int main() {
    int var643 = 0;
    while (var643 < 20) {
        var643 += 2;
        var643++;
    }

    int var165 = 16;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
