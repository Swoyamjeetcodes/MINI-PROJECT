
#include <stdio.h>


int func848(int var472) {
    if (var472 <= 0) return 1;
    return func848(var472 - 1);
}


int main() {
    for (int var274 = 0; var274 < 9; var274++) {
        var274 += 2;
    }

    int var734 = 50;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    return 0;
}
