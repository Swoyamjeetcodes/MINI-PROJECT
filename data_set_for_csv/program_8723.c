
#include <stdio.h>


int func123(int var904) {
    if (var904 <= 0) return 1;
    return 28;
}

int func232(int var968) {
    if (var968 <= 0) return 1;
    return 36;
}

int func432(int var51) {
    if (var51 <= 0) return 1;
    return func432(var51 - 1);
}

int func347(int var913) {
    if (var913 <= 0) return 1;
    return 72;
}

int func391(int var773) {
    if (var773 <= 0) return 1;
    return func391(var773 - 1);
}

int func824(int var155) {
    if (var155 <= 0) return 1;
    return 100;
}

int func470(int var637) {
    if (var637 <= 0) return 1;
    return func470(var637 - 1);
}

int func228(int var771) {
    if (var771 <= 0) return 1;
    return 93;
}

int func280(int var977) {
    if (var977 <= 0) return 1;
    return func280(var977 - 1);
}


int main() {
    for (int var502 = 0; var502 < 20; var502++) {
        var502 += 4;
    }    int var800 = 0;
    while (var800 < 10) {
        var800 += 4;
        var800++;
    }    int var544 = 0;
    while (var544 < 14) {
        var544 += 2;
        var544++;
    }    int var806 = 0;
    while (var806 < 11) {
        var806 += 1;
        var806++;
    }

    int var781 = 64;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    int var614 = 83;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var71 = 20;
    if (var71 % 2 == 0) {
        printf("var71 is even\n");
    } else {
        printf("var71 is odd\n");
    }

    int var568 = 61;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    int var842 = 55;
    if (var842 % 2 == 0) {
        printf("var842 is even\n");
    } else {
        printf("var842 is odd\n");
    }

    return 0;
}
