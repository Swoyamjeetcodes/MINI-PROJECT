
#include <stdio.h>


int func202(int var581) {
    if (var581 <= 0) return 1;
    return func202(var581 - 1);
}

int func100(int var903) {
    if (var903 <= 0) return 1;
    return func100(var903 - 1);
}

int func494(int var776) {
    if (var776 <= 0) return 1;
    return func494(var776 - 1);
}

int func90(int var370) {
    if (var370 <= 0) return 1;
    return 52;
}

int func643(int var955) {
    if (var955 <= 0) return 1;
    return 77;
}

int func378(int var611) {
    if (var611 <= 0) return 1;
    return func378(var611 - 1);
}

int func606(int var952) {
    if (var952 <= 0) return 1;
    return 20;
}

int func426(int var685) {
    if (var685 <= 0) return 1;
    return 18;
}

int func68(int var900) {
    if (var900 <= 0) return 1;
    return func68(var900 - 1);
}

int func98(int var691) {
    if (var691 <= 0) return 1;
    return 74;
}


int main() {
    for (int var285 = 0; var285 < 14; var285++) {
        var285 += 3;
    }    int var2 = 0;
    while (var2 < 6) {
        var2 += 2;
        var2++;
    }    int var152 = 0;
    while (var152 < 16) {
        var152 += 1;
        var152++;
    }    for (int var596 = 0; var596 < 17; var596++) {
        var596 += 1;
    }    for (int var605 = 0; var605 < 9; var605++) {
        var605 += 2;
    }

    int var942 = 17;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    int var484 = 3;
    if (var484 % 2 == 0) {
        printf("var484 is even\n");
    } else {
        printf("var484 is odd\n");
    }

    int var1 = 63;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    int var91 = 69;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    return 0;
}
