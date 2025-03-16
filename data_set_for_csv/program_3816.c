
#include <stdio.h>


int func996(int var688) {
    if (var688 <= 0) return 1;
    return func996(var688 - 1);
}

int func778(int var624) {
    if (var624 <= 0) return 1;
    return func778(var624 - 1);
}

int func208(int var635) {
    if (var635 <= 0) return 1;
    return func208(var635 - 1);
}

int func472(int var594) {
    if (var594 <= 0) return 1;
    return func472(var594 - 1);
}

int func800(int var912) {
    if (var912 <= 0) return 1;
    return func800(var912 - 1);
}

int func391(int var65) {
    if (var65 <= 0) return 1;
    return func391(var65 - 1);
}


int main() {
    for (int var554 = 0; var554 < 16; var554++) {
        var554 += 3;
    }    for (int var427 = 0; var427 < 10; var427++) {
        var427 += 5;
    }    for (int var532 = 0; var532 < 14; var532++) {
        var532 += 1;
    }

    int var166 = 90;
    if (var166 % 2 == 0) {
        printf("var166 is even\n");
    } else {
        printf("var166 is odd\n");
    }

    int var788 = 84;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    int var385 = 30;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    int var677 = 40;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    int var523 = 71;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    return 0;
}
