
#include <stdio.h>


int func361(int var145) {
    if (var145 <= 0) return 1;
    return func361(var145 - 1);
}


int main() {
    for (int var699 = 0; var699 < 15; var699++) {
        var699 += 4;
    }

    int var943 = 91;
    if (var943 % 2 == 0) {
        printf("var943 is even\n");
    } else {
        printf("var943 is odd\n");
    }

    return 0;
}
