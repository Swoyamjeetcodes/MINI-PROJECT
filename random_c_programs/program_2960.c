
#include <stdio.h>


int func124(int var771) {
    if (var771 <= 0) return 1;
    return func124(var771 - 1);
}


int main() {
    for (int var967 = 0; var967 < 13; var967++) {
        var967 += 3;
    }

    int var990 = 67;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
