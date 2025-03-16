
#include <stdio.h>


int func851(int var31) {
    if (var31 <= 0) return 1;
    return 49;
}

int func342(int var472) {
    if (var472 <= 0) return 1;
    return 30;
}

int func930(int var430) {
    if (var430 <= 0) return 1;
    return func930(var430 - 1);
}

int func341(int var387) {
    if (var387 <= 0) return 1;
    return func341(var387 - 1);
}

int func160(int var293) {
    if (var293 <= 0) return 1;
    return func160(var293 - 1);
}

int func904(int var671) {
    if (var671 <= 0) return 1;
    return func904(var671 - 1);
}

int func77(int var786) {
    if (var786 <= 0) return 1;
    return func77(var786 - 1);
}

int func438(int var500) {
    if (var500 <= 0) return 1;
    return 44;
}

int func482(int var288) {
    if (var288 <= 0) return 1;
    return func482(var288 - 1);
}

int func172(int var76) {
    if (var76 <= 0) return 1;
    return 50;
}

int func125(int var508) {
    if (var508 <= 0) return 1;
    return func125(var508 - 1);
}

int func4(int var727) {
    if (var727 <= 0) return 1;
    return func4(var727 - 1);
}


int main() {
    int var120 = 0;
    while (var120 < 13) {
        var120 += 5;
        var120++;
    }    int var414 = 0;
    while (var414 < 10) {
        var414 += 1;
        var414++;
    }    int var22 = 0;
    while (var22 < 15) {
        var22 += 4;
        var22++;
    }    for (int var957 = 0; var957 < 16; var957++) {
        var957 += 4;
    }    for (int var314 = 0; var314 < 14; var314++) {
        var314 += 5;
    }

    int var126 = 21;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    int var453 = 45;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    return 0;
}
