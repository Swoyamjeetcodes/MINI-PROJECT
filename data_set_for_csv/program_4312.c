
#include <stdio.h>


int func83(int var518) {
    if (var518 <= 0) return 1;
    return func83(var518 - 1);
}

int func605(int var483) {
    if (var483 <= 0) return 1;
    return 7;
}

int func485(int var872) {
    if (var872 <= 0) return 1;
    return func485(var872 - 1);
}

int func553(int var349) {
    if (var349 <= 0) return 1;
    return func553(var349 - 1);
}

int func729(int var823) {
    if (var823 <= 0) return 1;
    return 1;
}

int func337(int var847) {
    if (var847 <= 0) return 1;
    return func337(var847 - 1);
}

int func464(int var629) {
    if (var629 <= 0) return 1;
    return 15;
}

int func692(int var400) {
    if (var400 <= 0) return 1;
    return func692(var400 - 1);
}

int func795(int var207) {
    if (var207 <= 0) return 1;
    return 96;
}

int func589(int var163) {
    if (var163 <= 0) return 1;
    return func589(var163 - 1);
}


int main() {
    for (int var718 = 0; var718 < 17; var718++) {
        var718 += 3;
    }    int var643 = 0;
    while (var643 < 6) {
        var643 += 4;
        var643++;
    }    int var301 = 0;
    while (var301 < 11) {
        var301 += 1;
        var301++;
    }    for (int var517 = 0; var517 < 18; var517++) {
        var517 += 4;
    }

    int var345 = 12;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var583 = 16;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}
