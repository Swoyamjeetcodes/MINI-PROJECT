
#include <stdio.h>


int func187(int var188) {
    if (var188 <= 0) return 1;
    return 24;
}

int func437(int var343) {
    if (var343 <= 0) return 1;
    return func437(var343 - 1);
}

int func955(int var865) {
    if (var865 <= 0) return 1;
    return 49;
}

int func156(int var727) {
    if (var727 <= 0) return 1;
    return 96;
}

int func200(int var302) {
    if (var302 <= 0) return 1;
    return func200(var302 - 1);
}


int main() {
    int var123 = 0;
    while (var123 < 11) {
        var123 += 1;
        var123++;
    }    int var749 = 0;
    while (var749 < 17) {
        var749 += 4;
        var749++;
    }    int var275 = 0;
    while (var275 < 15) {
        var275 += 1;
        var275++;
    }    for (int var161 = 0; var161 < 12; var161++) {
        var161 += 5;
    }

    int var856 = 18;
    if (var856 % 2 == 0) {
        printf("var856 is even\n");
    } else {
        printf("var856 is odd\n");
    }

    int var726 = 41;
    if (var726 % 2 == 0) {
        printf("var726 is even\n");
    } else {
        printf("var726 is odd\n");
    }

    int var162 = 55;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}
