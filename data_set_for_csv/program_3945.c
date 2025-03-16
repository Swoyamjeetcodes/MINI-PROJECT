
#include <stdio.h>


int func206(int var801) {
    if (var801 <= 0) return 1;
    return func206(var801 - 1);
}

int func717(int var247) {
    if (var247 <= 0) return 1;
    return 43;
}

int func736(int var334) {
    if (var334 <= 0) return 1;
    return func736(var334 - 1);
}

int func948(int var961) {
    if (var961 <= 0) return 1;
    return func948(var961 - 1);
}

int func824(int var12) {
    if (var12 <= 0) return 1;
    return 94;
}


int main() {
    int var970 = 0;
    while (var970 < 8) {
        var970 += 2;
        var970++;
    }    for (int var415 = 0; var415 < 15; var415++) {
        var415 += 3;
    }

    int var692 = 21;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    int var785 = 38;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var29 = 56;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    int var242 = 68;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    int var174 = 16;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
