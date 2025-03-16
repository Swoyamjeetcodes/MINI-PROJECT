
#include <stdio.h>


int func297(int var311) {
    if (var311 <= 0) return 1;
    return 13;
}

int func704(int var841) {
    if (var841 <= 0) return 1;
    return func704(var841 - 1);
}

int func495(int var807) {
    if (var807 <= 0) return 1;
    return 79;
}

int func870(int var503) {
    if (var503 <= 0) return 1;
    return func870(var503 - 1);
}

int func824(int var294) {
    if (var294 <= 0) return 1;
    return func824(var294 - 1);
}


int main() {
    int var784 = 0;
    while (var784 < 15) {
        var784 += 4;
        var784++;
    }    int var541 = 0;
    while (var541 < 20) {
        var541 += 2;
        var541++;
    }    int var951 = 0;
    while (var951 < 19) {
        var951 += 4;
        var951++;
    }

    int var338 = 51;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    int var962 = 45;
    if (var962 % 2 == 0) {
        printf("var962 is even\n");
    } else {
        printf("var962 is odd\n");
    }

    return 0;
}
