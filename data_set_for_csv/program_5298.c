
#include <stdio.h>


int func744(int var244) {
    if (var244 <= 0) return 1;
    return func744(var244 - 1);
}

int func805(int var660) {
    if (var660 <= 0) return 1;
    return 100;
}

int func358(int var561) {
    if (var561 <= 0) return 1;
    return 95;
}


int main() {
    for (int var454 = 0; var454 < 12; var454++) {
        var454 += 4;
    }    int var609 = 0;
    while (var609 < 14) {
        var609 += 2;
        var609++;
    }

    int var785 = 77;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var777 = 28;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    int var404 = 23;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
