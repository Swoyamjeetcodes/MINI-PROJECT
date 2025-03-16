
#include <stdio.h>


int func386(int var443) {
    if (var443 <= 0) return 1;
    return func386(var443 - 1);
}


int main() {
    for (int var439 = 0; var439 < 14; var439++) {
        var439 += 1;
    }

    int var812 = 90;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
