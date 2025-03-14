
#include <stdio.h>


int func388(int var669) {
    if (var669 <= 0) return 1;
    return func388(var669 - 1);
}


int main() {
    for (int var384 = 0; var384 < 19; var384++) {
        var384 += 2;
    }

    int var743 = 48;
    if (var743 % 2 == 0) {
        printf("var743 is even\n");
    } else {
        printf("var743 is odd\n");
    }

    return 0;
}
