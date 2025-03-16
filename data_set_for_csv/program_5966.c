
#include <stdio.h>


int func883(int var192) {
    if (var192 <= 0) return 1;
    return func883(var192 - 1);
}


int main() {
    int var215 = 0;
    while (var215 < 10) {
        var215 += 4;
        var215++;
    }    int var187 = 0;
    while (var187 < 14) {
        var187 += 1;
        var187++;
    }

    int var474 = 25;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
