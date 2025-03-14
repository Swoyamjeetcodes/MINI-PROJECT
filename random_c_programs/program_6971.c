
#include <stdio.h>


int func963(int var177) {
    if (var177 <= 0) return 1;
    return func963(var177 - 1);
}


int main() {
    for (int var595 = 0; var595 < 14; var595++) {
        var595 += 1;
    }

    int var816 = 43;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    return 0;
}
