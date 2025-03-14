
#include <stdio.h>


int func717(int var15) {
    if (var15 <= 0) return 1;
    return func717(var15 - 1);
}


int main() {
    for (int var942 = 0; var942 < 8; var942++) {
        var942 += 3;
    }

    int var997 = 24;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
