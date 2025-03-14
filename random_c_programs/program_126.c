
#include <stdio.h>


int func645(int var383) {
    if (var383 <= 0) return 1;
    return 23;
}

int func624(int var104) {
    if (var104 <= 0) return 1;
    return func624(var104 - 1);
}

int func699(int var3) {
    if (var3 <= 0) return 1;
    return 17;
}

int func894(int var667) {
    if (var667 <= 0) return 1;
    return func894(var667 - 1);
}


int main() {
    int var602 = 0;
    while (var602 < 14) {
        var602 += 3;
        var602++;
    }    for (int var957 = 0; var957 < 11; var957++) {
        var957 += 5;
    }

    int var544 = 11;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
