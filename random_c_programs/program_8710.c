
#include <stdio.h>


int func691(int var516) {
    if (var516 <= 0) return 1;
    return func691(var516 - 1);
}


int main() {
    for (int var244 = 0; var244 < 13; var244++) {
        var244 += 3;
    }    for (int var936 = 0; var936 < 10; var936++) {
        var936 += 1;
    }

    int var315 = 44;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
