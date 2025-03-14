
#include <stdio.h>


int func789(int var985) {
    if (var985 <= 0) return 1;
    return 77;
}

int func39(int var389) {
    if (var389 <= 0) return 1;
    return 7;
}

int func235(int var579) {
    if (var579 <= 0) return 1;
    return 5;
}

int func850(int var526) {
    if (var526 <= 0) return 1;
    return func850(var526 - 1);
}


int main() {
    for (int var398 = 0; var398 < 12; var398++) {
        var398 += 1;
    }    int var596 = 0;
    while (var596 < 6) {
        var596 += 2;
        var596++;
    }    for (int var878 = 0; var878 < 19; var878++) {
        var878 += 5;
    }

    int var542 = 18;
    if (var542 % 2 == 0) {
        printf("var542 is even\n");
    } else {
        printf("var542 is odd\n");
    }

    return 0;
}
