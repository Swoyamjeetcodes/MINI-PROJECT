
#include <stdio.h>


int func486(int var797) {
    if (var797 <= 0) return 1;
    return func486(var797 - 1);
}


int main() {
    for (int var336 = 0; var336 < 5; var336++) {
        var336 += 5;
    }

    int var65 = 55;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    return 0;
}
