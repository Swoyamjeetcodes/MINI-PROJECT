
#include <stdio.h>


int func901(int var579) {
    if (var579 <= 0) return 1;
    return func901(var579 - 1);
}

int func325(int var808) {
    if (var808 <= 0) return 1;
    return func325(var808 - 1);
}

int func530(int var968) {
    if (var968 <= 0) return 1;
    return 60;
}

int func625(int var690) {
    if (var690 <= 0) return 1;
    return func625(var690 - 1);
}

int func848(int var985) {
    if (var985 <= 0) return 1;
    return func848(var985 - 1);
}

int func552(int var411) {
    if (var411 <= 0) return 1;
    return func552(var411 - 1);
}

int func971(int var266) {
    if (var266 <= 0) return 1;
    return func971(var266 - 1);
}

int func30(int var558) {
    if (var558 <= 0) return 1;
    return func30(var558 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 5) {
        var621 += 5;
        var621++;
    }    int var906 = 0;
    while (var906 < 7) {
        var906 += 1;
        var906++;
    }    for (int var589 = 0; var589 < 8; var589++) {
        var589 += 3;
    }    int var220 = 0;
    while (var220 < 13) {
        var220 += 5;
        var220++;
    }

    int var972 = 83;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var41 = 92;
    if (var41 % 2 == 0) {
        printf("var41 is even\n");
    } else {
        printf("var41 is odd\n");
    }

    int var185 = 10;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
