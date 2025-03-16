
#include <stdio.h>


int func540(int var99) {
    if (var99 <= 0) return 1;
    return func540(var99 - 1);
}


int main() {
    for (int var62 = 0; var62 < 17; var62++) {
        var62 += 2;
    }

    int var427 = 64;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    return 0;
}
