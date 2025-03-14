
#include <stdio.h>


int func241(int var363) {
    if (var363 <= 0) return 1;
    return func241(var363 - 1);
}

int func175(int var43) {
    if (var43 <= 0) return 1;
    return func175(var43 - 1);
}

int func168(int var479) {
    if (var479 <= 0) return 1;
    return 43;
}

int func834(int var587) {
    if (var587 <= 0) return 1;
    return 26;
}


int main() {
    int var728 = 0;
    while (var728 < 9) {
        var728 += 3;
        var728++;
    }    int var851 = 0;
    while (var851 < 19) {
        var851 += 2;
        var851++;
    }    int var603 = 0;
    while (var603 < 19) {
        var603 += 4;
        var603++;
    }

    int var289 = 11;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    int var695 = 29;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    int var79 = 33;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    return 0;
}
