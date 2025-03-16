
#include <stdio.h>


int func309(int var462) {
    if (var462 <= 0) return 1;
    return func309(var462 - 1);
}


int main() {
    for (int var699 = 0; var699 < 6; var699++) {
        var699 += 2;
    }    for (int var400 = 0; var400 < 19; var400++) {
        var400 += 3;
    }    int var974 = 0;
    while (var974 < 20) {
        var974 += 1;
        var974++;
    }

    int var833 = 80;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    int var744 = 92;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    return 0;
}
