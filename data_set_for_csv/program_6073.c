
#include <stdio.h>


int func169(int var733) {
    if (var733 <= 0) return 1;
    return 4;
}

int func494(int var264) {
    if (var264 <= 0) return 1;
    return 44;
}

int func303(int var344) {
    if (var344 <= 0) return 1;
    return func303(var344 - 1);
}

int func786(int var373) {
    if (var373 <= 0) return 1;
    return 20;
}

int func372(int var271) {
    if (var271 <= 0) return 1;
    return 35;
}

int func457(int var519) {
    if (var519 <= 0) return 1;
    return 57;
}


int main() {
    for (int var76 = 0; var76 < 9; var76++) {
        var76 += 3;
    }    int var55 = 0;
    while (var55 < 11) {
        var55 += 4;
        var55++;
    }    for (int var151 = 0; var151 < 6; var151++) {
        var151 += 5;
    }    int var805 = 0;
    while (var805 < 8) {
        var805 += 2;
        var805++;
    }    int var594 = 0;
    while (var594 < 10) {
        var594 += 2;
        var594++;
    }    int var499 = 0;
    while (var499 < 20) {
        var499 += 5;
        var499++;
    }

    int var763 = 14;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    int var281 = 82;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    int var197 = 86;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    int var963 = 85;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
