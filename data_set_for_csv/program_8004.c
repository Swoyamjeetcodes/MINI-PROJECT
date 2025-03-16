
#include <stdio.h>


int func799(int var478) {
    if (var478 <= 0) return 1;
    return 10;
}

int func747(int var748) {
    if (var748 <= 0) return 1;
    return func747(var748 - 1);
}

int func338(int var245) {
    if (var245 <= 0) return 1;
    return func338(var245 - 1);
}

int func431(int var798) {
    if (var798 <= 0) return 1;
    return 77;
}


int main() {
    int var407 = 0;
    while (var407 < 16) {
        var407 += 2;
        var407++;
    }    for (int var416 = 0; var416 < 19; var416++) {
        var416 += 1;
    }    int var210 = 0;
    while (var210 < 13) {
        var210 += 1;
        var210++;
    }

    int var43 = 63;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var161 = 90;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    int var713 = 97;
    if (var713 % 2 == 0) {
        printf("var713 is even\n");
    } else {
        printf("var713 is odd\n");
    }

    return 0;
}
