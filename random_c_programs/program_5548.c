
#include <stdio.h>


int func883(int var195) {
    if (var195 <= 0) return 1;
    return func883(var195 - 1);
}


int main() {
    for (int var652 = 0; var652 < 10; var652++) {
        var652 += 3;
    }

    int var762 = 62;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
