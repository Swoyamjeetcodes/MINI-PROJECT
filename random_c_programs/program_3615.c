
#include <stdio.h>


int func837(int var798) {
    if (var798 <= 0) return 1;
    return 90;
}

int func288(int var22) {
    if (var22 <= 0) return 1;
    return 84;
}

int func486(int var119) {
    if (var119 <= 0) return 1;
    return 33;
}

int func861(int var692) {
    if (var692 <= 0) return 1;
    return func861(var692 - 1);
}

int func112(int var163) {
    if (var163 <= 0) return 1;
    return func112(var163 - 1);
}

int func748(int var635) {
    if (var635 <= 0) return 1;
    return func748(var635 - 1);
}

int func461(int var844) {
    if (var844 <= 0) return 1;
    return 70;
}

int func24(int var724) {
    if (var724 <= 0) return 1;
    return 15;
}

int func678(int var966) {
    if (var966 <= 0) return 1;
    return func678(var966 - 1);
}


int main() {
    for (int var985 = 0; var985 < 12; var985++) {
        var985 += 3;
    }    for (int var545 = 0; var545 < 9; var545++) {
        var545 += 2;
    }    int var702 = 0;
    while (var702 < 8) {
        var702 += 1;
        var702++;
    }    int var919 = 0;
    while (var919 < 17) {
        var919 += 2;
        var919++;
    }

    int var38 = 38;
    if (var38 % 2 == 0) {
        printf("var38 is even\n");
    } else {
        printf("var38 is odd\n");
    }

    return 0;
}
