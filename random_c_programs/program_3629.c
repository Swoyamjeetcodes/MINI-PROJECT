
#include <stdio.h>


int func520(int var670) {
    if (var670 <= 0) return 1;
    return func520(var670 - 1);
}

int func165(int var269) {
    if (var269 <= 0) return 1;
    return func165(var269 - 1);
}

int func418(int var359) {
    if (var359 <= 0) return 1;
    return 64;
}

int func2(int var331) {
    if (var331 <= 0) return 1;
    return func2(var331 - 1);
}


int main() {
    int var860 = 0;
    while (var860 < 20) {
        var860 += 5;
        var860++;
    }    for (int var487 = 0; var487 < 19; var487++) {
        var487 += 4;
    }    for (int var698 = 0; var698 < 15; var698++) {
        var698 += 1;
    }    for (int var644 = 0; var644 < 12; var644++) {
        var644 += 5;
    }    for (int var704 = 0; var704 < 20; var704++) {
        var704 += 2;
    }    for (int var999 = 0; var999 < 12; var999++) {
        var999 += 3;
    }    for (int var173 = 0; var173 < 12; var173++) {
        var173 += 5;
    }

    int var672 = 21;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    int var545 = 20;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    int var587 = 23;
    if (var587 % 2 == 0) {
        printf("var587 is even\n");
    } else {
        printf("var587 is odd\n");
    }

    int var260 = 70;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    int var17 = 23;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
