
#include <stdio.h>


int func983(int var375) {
    if (var375 <= 0) return 1;
    return func983(var375 - 1);
}


int main() {
    for (int var796 = 0; var796 < 10; var796++) {
        var796 += 2;
    }

    int var393 = 64;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
