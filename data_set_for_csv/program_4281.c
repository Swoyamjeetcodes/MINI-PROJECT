
#include <stdio.h>


int func192(int var561) {
    if (var561 <= 0) return 1;
    return func192(var561 - 1);
}


int main() {
    for (int var14 = 0; var14 < 6; var14++) {
        var14 += 4;
    }

    int var441 = 26;
    if (var441 % 2 == 0) {
        printf("var441 is even\n");
    } else {
        printf("var441 is odd\n");
    }

    return 0;
}
