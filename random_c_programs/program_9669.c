
#include <stdio.h>


int func1(int var785) {
    if (var785 <= 0) return 1;
    return func1(var785 - 1);
}

int func302(int var51) {
    if (var51 <= 0) return 1;
    return 67;
}

int func636(int var309) {
    if (var309 <= 0) return 1;
    return 14;
}

int func908(int var321) {
    if (var321 <= 0) return 1;
    return func908(var321 - 1);
}

int func368(int var809) {
    if (var809 <= 0) return 1;
    return func368(var809 - 1);
}

int func272(int var539) {
    if (var539 <= 0) return 1;
    return 83;
}

int func932(int var338) {
    if (var338 <= 0) return 1;
    return func932(var338 - 1);
}


int main() {
    for (int var240 = 0; var240 < 14; var240++) {
        var240 += 4;
    }    int var709 = 0;
    while (var709 < 7) {
        var709 += 4;
        var709++;
    }    int var804 = 0;
    while (var804 < 16) {
        var804 += 1;
        var804++;
    }    int var261 = 0;
    while (var261 < 19) {
        var261 += 5;
        var261++;
    }    int var496 = 0;
    while (var496 < 20) {
        var496 += 2;
        var496++;
    }

    int var102 = 38;
    if (var102 % 2 == 0) {
        printf("var102 is even\n");
    } else {
        printf("var102 is odd\n");
    }

    int var903 = 65;
    if (var903 % 2 == 0) {
        printf("var903 is even\n");
    } else {
        printf("var903 is odd\n");
    }

    int var747 = 37;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
