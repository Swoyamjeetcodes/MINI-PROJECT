
#include <stdio.h>


int func551(int var419) {
    if (var419 <= 0) return 1;
    return func551(var419 - 1);
}


int main() {
    int var396 = 0;
    while (var396 < 9) {
        var396 += 5;
        var396++;
    }

    int var843 = 45;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    return 0;
}
