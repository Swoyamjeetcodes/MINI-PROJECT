
#include <stdio.h>


int func494(int var390) {
    if (var390 <= 0) return 1;
    return func494(var390 - 1);
}


int main() {
    for (int var514 = 0; var514 < 12; var514++) {
        var514 += 4;
    }

    int var386 = 54;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}
