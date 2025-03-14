
#include <stdio.h>


int func84(int var416) {
    if (var416 <= 0) return 1;
    return 33;
}

int func752(int var931) {
    if (var931 <= 0) return 1;
    return 98;
}

int func269(int var578) {
    if (var578 <= 0) return 1;
    return 85;
}

int func593(int var869) {
    if (var869 <= 0) return 1;
    return func593(var869 - 1);
}


int main() {
    for (int var697 = 0; var697 < 9; var697++) {
        var697 += 4;
    }    int var311 = 0;
    while (var311 < 13) {
        var311 += 2;
        var311++;
    }

    int var105 = 27;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    int var914 = 54;
    if (var914 % 2 == 0) {
        printf("var914 is even\n");
    } else {
        printf("var914 is odd\n");
    }

    int var794 = 87;
    if (var794 % 2 == 0) {
        printf("var794 is even\n");
    } else {
        printf("var794 is odd\n");
    }

    return 0;
}
