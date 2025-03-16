
#include <stdio.h>


int func686(int var421) {
    if (var421 <= 0) return 1;
    return 98;
}

int func295(int var246) {
    if (var246 <= 0) return 1;
    return func295(var246 - 1);
}

int func165(int var536) {
    if (var536 <= 0) return 1;
    return 71;
}

int func156(int var166) {
    if (var166 <= 0) return 1;
    return func156(var166 - 1);
}

int func581(int var604) {
    if (var604 <= 0) return 1;
    return 68;
}

int func832(int var272) {
    if (var272 <= 0) return 1;
    return func832(var272 - 1);
}


int main() {
    int var280 = 0;
    while (var280 < 11) {
        var280 += 2;
        var280++;
    }    for (int var379 = 0; var379 < 11; var379++) {
        var379 += 3;
    }    for (int var959 = 0; var959 < 15; var959++) {
        var959 += 1;
    }

    int var824 = 10;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
