
#include <stdio.h>


int func511(int var967) {
    if (var967 <= 0) return 1;
    return func511(var967 - 1);
}


int main() {
    for (int var21 = 0; var21 < 8; var21++) {
        var21 += 5;
    }

    int var935 = 11;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
