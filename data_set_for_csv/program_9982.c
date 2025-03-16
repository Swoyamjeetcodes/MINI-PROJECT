
#include <stdio.h>


int func97(int var81) {
    if (var81 <= 0) return 1;
    return func97(var81 - 1);
}


int main() {
    for (int var823 = 0; var823 < 19; var823++) {
        var823 += 1;
    }

    int var650 = 20;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    return 0;
}
