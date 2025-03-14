
#include <stdio.h>


int func110(int var408) {
    if (var408 <= 0) return 1;
    return 21;
}

int func29(int var636) {
    if (var636 <= 0) return 1;
    return 78;
}

int func757(int var995) {
    if (var995 <= 0) return 1;
    return func757(var995 - 1);
}

int func633(int var910) {
    if (var910 <= 0) return 1;
    return 73;
}

int func363(int var765) {
    if (var765 <= 0) return 1;
    return func363(var765 - 1);
}


int main() {
    int var362 = 0;
    while (var362 < 15) {
        var362 += 5;
        var362++;
    }

    int var386 = 77;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    return 0;
}
