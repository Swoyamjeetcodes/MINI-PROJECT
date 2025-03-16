
#include <stdio.h>


int func859(int var807) {
    if (var807 <= 0) return 1;
    return 31;
}

int func570(int var110) {
    if (var110 <= 0) return 1;
    return func570(var110 - 1);
}

int func596(int var200) {
    if (var200 <= 0) return 1;
    return func596(var200 - 1);
}

int func640(int var91) {
    if (var91 <= 0) return 1;
    return 9;
}

int func217(int var706) {
    if (var706 <= 0) return 1;
    return func217(var706 - 1);
}


int main() {
    int var969 = 0;
    while (var969 < 7) {
        var969 += 2;
        var969++;
    }    for (int var565 = 0; var565 < 13; var565++) {
        var565 += 3;
    }    for (int var679 = 0; var679 < 7; var679++) {
        var679 += 5;
    }

    int var620 = 45;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    int var611 = 19;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    return 0;
}
