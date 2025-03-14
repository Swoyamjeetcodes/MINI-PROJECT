
#include <stdio.h>


int func488(int var304) {
    if (var304 <= 0) return 1;
    return 32;
}

int func704(int var424) {
    if (var424 <= 0) return 1;
    return func704(var424 - 1);
}

int func325(int var525) {
    if (var525 <= 0) return 1;
    return 61;
}

int func267(int var572) {
    if (var572 <= 0) return 1;
    return 57;
}

int func945(int var825) {
    if (var825 <= 0) return 1;
    return func945(var825 - 1);
}

int func294(int var269) {
    if (var269 <= 0) return 1;
    return func294(var269 - 1);
}


int main() {
    for (int var981 = 0; var981 < 5; var981++) {
        var981 += 5;
    }    for (int var469 = 0; var469 < 13; var469++) {
        var469 += 2;
    }    for (int var311 = 0; var311 < 12; var311++) {
        var311 += 1;
    }    int var684 = 0;
    while (var684 < 10) {
        var684 += 5;
        var684++;
    }    int var972 = 0;
    while (var972 < 7) {
        var972 += 3;
        var972++;
    }

    int var974 = 69;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    int var172 = 44;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    int var967 = 86;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    return 0;
}
