
#include <stdio.h>


int func839(int var975) {
    if (var975 <= 0) return 1;
    return func839(var975 - 1);
}


int main() {
    for (int var225 = 0; var225 < 6; var225++) {
        var225 += 5;
    }

    int var549 = 38;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    return 0;
}
