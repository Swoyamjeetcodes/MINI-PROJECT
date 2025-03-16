
#include <stdio.h>


int func337(int var146) {
    if (var146 <= 0) return 1;
    return 94;
}

int func370(int var977) {
    if (var977 <= 0) return 1;
    return 87;
}

int func915(int var143) {
    if (var143 <= 0) return 1;
    return 41;
}

int func8(int var727) {
    if (var727 <= 0) return 1;
    return func8(var727 - 1);
}

int func2(int var752) {
    if (var752 <= 0) return 1;
    return func2(var752 - 1);
}

int func440(int var218) {
    if (var218 <= 0) return 1;
    return func440(var218 - 1);
}

int func1(int var853) {
    if (var853 <= 0) return 1;
    return 16;
}


int main() {
    int var705 = 0;
    while (var705 < 5) {
        var705 += 4;
        var705++;
    }    int var356 = 0;
    while (var356 < 11) {
        var356 += 5;
        var356++;
    }    for (int var458 = 0; var458 < 12; var458++) {
        var458 += 3;
    }    for (int var161 = 0; var161 < 20; var161++) {
        var161 += 2;
    }    for (int var455 = 0; var455 < 14; var455++) {
        var455 += 1;
    }

    int var398 = 22;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    int var205 = 69;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    return 0;
}
