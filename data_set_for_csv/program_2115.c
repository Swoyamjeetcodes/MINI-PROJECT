
#include <stdio.h>


int func643(int var797) {
    if (var797 <= 0) return 1;
    return func643(var797 - 1);
}


int main() {
    for (int var656 = 0; var656 < 7; var656++) {
        var656 += 3;
    }

    int var598 = 75;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
