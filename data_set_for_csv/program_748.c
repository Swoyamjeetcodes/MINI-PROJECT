
#include <stdio.h>


int func561(int var290) {
    if (var290 <= 0) return 1;
    return func561(var290 - 1);
}


int main() {
    for (int var386 = 0; var386 < 6; var386++) {
        var386 += 2;
    }

    int var446 = 98;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
