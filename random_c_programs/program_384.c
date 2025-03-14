
#include <stdio.h>


int func51(int var65) {
    if (var65 <= 0) return 1;
    return func51(var65 - 1);
}


int main() {
    for (int var595 = 0; var595 < 18; var595++) {
        var595 += 3;
    }

    int var225 = 36;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
