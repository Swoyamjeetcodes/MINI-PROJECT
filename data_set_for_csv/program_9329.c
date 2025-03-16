
#include <stdio.h>


int func635(int var331) {
    if (var331 <= 0) return 1;
    return func635(var331 - 1);
}


int main() {
    int var475 = 0;
    while (var475 < 19) {
        var475 += 2;
        var475++;
    }    int var338 = 0;
    while (var338 < 16) {
        var338 += 1;
        var338++;
    }

    int var928 = 93;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    return 0;
}
