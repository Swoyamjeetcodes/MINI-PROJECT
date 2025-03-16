
#include <stdio.h>


int func414(int var754) {
    if (var754 <= 0) return 1;
    return func414(var754 - 1);
}


int main() {
    for (int var396 = 0; var396 < 9; var396++) {
        var396 += 1;
    }

    int var696 = 75;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
