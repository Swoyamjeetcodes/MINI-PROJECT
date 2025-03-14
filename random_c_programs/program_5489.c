
#include <stdio.h>


int func703(int var636) {
    if (var636 <= 0) return 1;
    return func703(var636 - 1);
}

int func741(int var578) {
    if (var578 <= 0) return 1;
    return func741(var578 - 1);
}

int func535(int var989) {
    if (var989 <= 0) return 1;
    return func535(var989 - 1);
}

int func388(int var738) {
    if (var738 <= 0) return 1;
    return func388(var738 - 1);
}

int func364(int var62) {
    if (var62 <= 0) return 1;
    return 17;
}

int func533(int var701) {
    if (var701 <= 0) return 1;
    return 32;
}

int func732(int var258) {
    if (var258 <= 0) return 1;
    return func732(var258 - 1);
}

int func812(int var89) {
    if (var89 <= 0) return 1;
    return func812(var89 - 1);
}

int func654(int var848) {
    if (var848 <= 0) return 1;
    return 88;
}

int func621(int var884) {
    if (var884 <= 0) return 1;
    return 1;
}


int main() {
    int var951 = 0;
    while (var951 < 16) {
        var951 += 2;
        var951++;
    }    int var271 = 0;
    while (var271 < 15) {
        var271 += 3;
        var271++;
    }    for (int var480 = 0; var480 < 16; var480++) {
        var480 += 5;
    }    int var659 = 0;
    while (var659 < 8) {
        var659 += 1;
        var659++;
    }    for (int var241 = 0; var241 < 6; var241++) {
        var241 += 5;
    }    int var515 = 0;
    while (var515 < 6) {
        var515 += 5;
        var515++;
    }    int var497 = 0;
    while (var497 < 5) {
        var497 += 5;
        var497++;
    }

    int var505 = 72;
    if (var505 % 2 == 0) {
        printf("var505 is even\n");
    } else {
        printf("var505 is odd\n");
    }

    int var807 = 21;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    int var116 = 33;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    return 0;
}
