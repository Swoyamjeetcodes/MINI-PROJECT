
#include <stdio.h>


int func665(int var284) {
    if (var284 <= 0) return 1;
    return func665(var284 - 1);
}


int main() {
    for (int var399 = 0; var399 < 20; var399++) {
        var399 += 2;
    }

    int var792 = 12;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
