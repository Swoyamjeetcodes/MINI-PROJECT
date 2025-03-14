
#include <stdio.h>


int func545(int var428) {
    if (var428 <= 0) return 1;
    return func545(var428 - 1);
}


int main() {
    int var471 = 0;
    while (var471 < 10) {
        var471 += 4;
        var471++;
    }

    int var821 = 99;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
