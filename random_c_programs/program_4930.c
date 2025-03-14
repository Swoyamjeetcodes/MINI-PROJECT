
#include <stdio.h>


int func223(int var448) {
    if (var448 <= 0) return 1;
    return func223(var448 - 1);
}


int main() {
    for (int var207 = 0; var207 < 14; var207++) {
        var207 += 2;
    }

    int var86 = 47;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
