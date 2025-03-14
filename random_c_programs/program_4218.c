
#include <stdio.h>


int func435(int var14) {
    if (var14 <= 0) return 1;
    return func435(var14 - 1);
}


int main() {
    for (int var970 = 0; var970 < 9; var970++) {
        var970 += 3;
    }

    int var985 = 72;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    return 0;
}
