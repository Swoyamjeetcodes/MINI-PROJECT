
#include <stdio.h>


int func676(int var584) {
    if (var584 <= 0) return 1;
    return func676(var584 - 1);
}


int main() {
    for (int var921 = 0; var921 < 9; var921++) {
        var921 += 1;
    }

    int var485 = 8;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    return 0;
}
