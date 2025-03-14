
#include <stdio.h>


int func549(int var58) {
    if (var58 <= 0) return 1;
    return func549(var58 - 1);
}


int main() {
    for (int var986 = 0; var986 < 9; var986++) {
        var986 += 2;
    }

    int var933 = 49;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    return 0;
}
