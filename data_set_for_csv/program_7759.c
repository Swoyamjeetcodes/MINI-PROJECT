
#include <stdio.h>


int func93(int var255) {
    if (var255 <= 0) return 1;
    return func93(var255 - 1);
}


int main() {
    int var432 = 0;
    while (var432 < 9) {
        var432 += 1;
        var432++;
    }

    int var193 = 81;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    return 0;
}
