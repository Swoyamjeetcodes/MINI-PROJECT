
#include <stdio.h>


int func656(int var415) {
    if (var415 <= 0) return 1;
    return func656(var415 - 1);
}


int main() {
    for (int var714 = 0; var714 < 15; var714++) {
        var714 += 2;
    }

    int var84 = 69;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
