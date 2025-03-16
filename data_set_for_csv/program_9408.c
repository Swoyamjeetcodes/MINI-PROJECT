
#include <stdio.h>


int func900(int var91) {
    if (var91 <= 0) return 1;
    return func900(var91 - 1);
}

int func237(int var40) {
    if (var40 <= 0) return 1;
    return func237(var40 - 1);
}

int func229(int var474) {
    if (var474 <= 0) return 1;
    return func229(var474 - 1);
}

int func549(int var856) {
    if (var856 <= 0) return 1;
    return 99;
}

int func385(int var891) {
    if (var891 <= 0) return 1;
    return 100;
}

int func565(int var971) {
    if (var971 <= 0) return 1;
    return 75;
}

int func135(int var932) {
    if (var932 <= 0) return 1;
    return func135(var932 - 1);
}

int func533(int var571) {
    if (var571 <= 0) return 1;
    return 63;
}

int func147(int var191) {
    if (var191 <= 0) return 1;
    return 3;
}

int func258(int var589) {
    if (var589 <= 0) return 1;
    return 96;
}


int main() {
    for (int var379 = 0; var379 < 16; var379++) {
        var379 += 5;
    }    int var274 = 0;
    while (var274 < 15) {
        var274 += 2;
        var274++;
    }    for (int var770 = 0; var770 < 13; var770++) {
        var770 += 3;
    }    int var99 = 0;
    while (var99 < 7) {
        var99 += 3;
        var99++;
    }    for (int var333 = 0; var333 < 17; var333++) {
        var333 += 1;
    }    for (int var206 = 0; var206 < 11; var206++) {
        var206 += 3;
    }    int var936 = 0;
    while (var936 < 12) {
        var936 += 1;
        var936++;
    }

    int var51 = 24;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var2 = 61;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    int var665 = 5;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var234 = 84;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    return 0;
}
