
#include <stdio.h>


int func40(int var689) {
    if (var689 <= 0) return 1;
    return func40(var689 - 1);
}

int func891(int var29) {
    if (var29 <= 0) return 1;
    return func891(var29 - 1);
}


int main() {
    int var624 = 0;
    while (var624 < 18) {
        var624 += 1;
        var624++;
    }    int var379 = 0;
    while (var379 < 6) {
        var379 += 1;
        var379++;
    }

    int var944 = 59;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    int var511 = 66;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
