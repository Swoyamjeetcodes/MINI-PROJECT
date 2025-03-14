
#include <stdio.h>


int func963(int var751) {
    if (var751 <= 0) return 1;
    return func963(var751 - 1);
}


int main() {
    for (int var504 = 0; var504 < 17; var504++) {
        var504 += 3;
    }

    int var304 = 29;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
