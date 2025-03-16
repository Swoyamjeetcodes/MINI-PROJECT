
#include <stdio.h>


int func615(int var551) {
    if (var551 <= 0) return 1;
    return func615(var551 - 1);
}


int main() {
    for (int var123 = 0; var123 < 18; var123++) {
        var123 += 4;
    }

    int var750 = 10;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
