
#include <stdio.h>


int func55(int var467) {
    if (var467 <= 0) return 1;
    return func55(var467 - 1);
}


int main() {
    for (int var629 = 0; var629 < 8; var629++) {
        var629 += 2;
    }

    int var303 = 39;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
