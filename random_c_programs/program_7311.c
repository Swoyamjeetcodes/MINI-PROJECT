
#include <stdio.h>


int func904(int var79) {
    if (var79 <= 0) return 1;
    return func904(var79 - 1);
}


int main() {
    for (int var599 = 0; var599 < 11; var599++) {
        var599 += 5;
    }

    int var586 = 0;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
