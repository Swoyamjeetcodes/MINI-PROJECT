
#include <stdio.h>


int func594(int var34) {
    if (var34 <= 0) return 1;
    return func594(var34 - 1);
}


int main() {
    for (int var173 = 0; var173 < 6; var173++) {
        var173 += 1;
    }    for (int var979 = 0; var979 < 9; var979++) {
        var979 += 5;
    }    int var653 = 0;
    while (var653 < 19) {
        var653 += 4;
        var653++;
    }

    int var132 = 85;
    if (var132 % 2 == 0) {
        printf("var132 is even\n");
    } else {
        printf("var132 is odd\n");
    }

    int var14 = 98;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    return 0;
}
