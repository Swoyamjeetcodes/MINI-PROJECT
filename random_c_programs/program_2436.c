
#include <stdio.h>


int func19(int var509) {
    if (var509 <= 0) return 1;
    return func19(var509 - 1);
}


int main() {
    for (int var605 = 0; var605 < 13; var605++) {
        var605 += 4;
    }

    int var975 = 100;
    if (var975 % 2 == 0) {
        printf("var975 is even\n");
    } else {
        printf("var975 is odd\n");
    }

    return 0;
}
