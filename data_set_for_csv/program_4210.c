
#include <stdio.h>


int func386(int var822) {
    if (var822 <= 0) return 1;
    return func386(var822 - 1);
}


int main() {
    for (int var390 = 0; var390 < 11; var390++) {
        var390 += 5;
    }

    int var16 = 44;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    return 0;
}
