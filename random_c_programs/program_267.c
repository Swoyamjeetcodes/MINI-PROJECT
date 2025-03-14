
#include <stdio.h>


int func55(int var955) {
    if (var955 <= 0) return 1;
    return 25;
}

int func646(int var447) {
    if (var447 <= 0) return 1;
    return func646(var447 - 1);
}

int func393(int var376) {
    if (var376 <= 0) return 1;
    return func393(var376 - 1);
}


int main() {
    int var180 = 0;
    while (var180 < 20) {
        var180 += 4;
        var180++;
    }

    int var290 = 12;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    int var586 = 1;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var775 = 84;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
