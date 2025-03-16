
#include <stdio.h>


int func600(int var111) {
    if (var111 <= 0) return 1;
    return func600(var111 - 1);
}


int main() {
    for (int var150 = 0; var150 < 19; var150++) {
        var150 += 2;
    }

    int var253 = 8;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
