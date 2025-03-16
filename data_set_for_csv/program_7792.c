
#include <stdio.h>


int func1(int var517) {
    if (var517 <= 0) return 1;
    return 34;
}

int func467(int var873) {
    if (var873 <= 0) return 1;
    return 21;
}

int func545(int var258) {
    if (var258 <= 0) return 1;
    return func545(var258 - 1);
}

int func68(int var601) {
    if (var601 <= 0) return 1;
    return func68(var601 - 1);
}

int func902(int var377) {
    if (var377 <= 0) return 1;
    return 16;
}

int func390(int var586) {
    if (var586 <= 0) return 1;
    return func390(var586 - 1);
}

int func622(int var9) {
    if (var9 <= 0) return 1;
    return 78;
}


int main() {
    int var158 = 0;
    while (var158 < 8) {
        var158 += 5;
        var158++;
    }    for (int var274 = 0; var274 < 20; var274++) {
        var274 += 5;
    }    for (int var704 = 0; var704 < 20; var704++) {
        var704 += 1;
    }    for (int var605 = 0; var605 < 7; var605++) {
        var605 += 5;
    }    int var27 = 0;
    while (var27 < 14) {
        var27 += 2;
        var27++;
    }

    int var114 = 38;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    int var723 = 5;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    return 0;
}
