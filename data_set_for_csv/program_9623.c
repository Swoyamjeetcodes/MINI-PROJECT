
#include <stdio.h>


int func816(int var284) {
    if (var284 <= 0) return 1;
    return func816(var284 - 1);
}


int main() {
    for (int var615 = 0; var615 < 14; var615++) {
        var615 += 2;
    }

    int var492 = 3;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    return 0;
}
