
#include <stdio.h>


int func256(int var653) {
    if (var653 <= 0) return 1;
    return func256(var653 - 1);
}


int main() {
    for (int var746 = 0; var746 < 20; var746++) {
        var746 += 2;
    }

    int var81 = 41;
    if (var81 % 2 == 0) {
        printf("var81 is even\n");
    } else {
        printf("var81 is odd\n");
    }

    return 0;
}
