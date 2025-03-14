
#include <stdio.h>


int func699(int var754) {
    if (var754 <= 0) return 1;
    return func699(var754 - 1);
}


int main() {
    for (int var84 = 0; var84 < 12; var84++) {
        var84 += 3;
    }

    int var884 = 18;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
