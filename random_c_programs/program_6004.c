
#include <stdio.h>


int func327(int var771) {
    if (var771 <= 0) return 1;
    return func327(var771 - 1);
}


int main() {
    int var298 = 0;
    while (var298 < 17) {
        var298 += 4;
        var298++;
    }

    int var117 = 36;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
