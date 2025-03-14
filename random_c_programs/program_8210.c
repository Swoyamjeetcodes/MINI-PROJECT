
#include <stdio.h>


int func282(int var27) {
    if (var27 <= 0) return 1;
    return func282(var27 - 1);
}


int main() {
    int var545 = 0;
    while (var545 < 20) {
        var545 += 1;
        var545++;
    }

    int var608 = 99;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    return 0;
}
