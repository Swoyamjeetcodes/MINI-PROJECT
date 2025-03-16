
#include <stdio.h>


int func748(int var928) {
    if (var928 <= 0) return 1;
    return 61;
}

int func772(int var937) {
    if (var937 <= 0) return 1;
    return 3;
}

int func593(int var207) {
    if (var207 <= 0) return 1;
    return func593(var207 - 1);
}

int func208(int var46) {
    if (var46 <= 0) return 1;
    return 32;
}

int func704(int var68) {
    if (var68 <= 0) return 1;
    return func704(var68 - 1);
}

int func443(int var790) {
    if (var790 <= 0) return 1;
    return func443(var790 - 1);
}

int func862(int var617) {
    if (var617 <= 0) return 1;
    return func862(var617 - 1);
}

int func963(int var792) {
    if (var792 <= 0) return 1;
    return 39;
}

int func97(int var193) {
    if (var193 <= 0) return 1;
    return 44;
}

int func168(int var426) {
    if (var426 <= 0) return 1;
    return 1;
}


int main() {
    int var152 = 0;
    while (var152 < 9) {
        var152 += 2;
        var152++;
    }    int var470 = 0;
    while (var470 < 19) {
        var470 += 2;
        var470++;
    }    int var915 = 0;
    while (var915 < 6) {
        var915 += 3;
        var915++;
    }    int var112 = 0;
    while (var112 < 7) {
        var112 += 4;
        var112++;
    }

    int var322 = 61;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    int var913 = 58;
    if (var913 % 2 == 0) {
        printf("var913 is even\n");
    } else {
        printf("var913 is odd\n");
    }

    int var439 = 44;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    int var917 = 11;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
