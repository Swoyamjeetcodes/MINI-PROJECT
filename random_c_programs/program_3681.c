
#include <stdio.h>


int func98(int var977) {
    if (var977 <= 0) return 1;
    return func98(var977 - 1);
}

int func167(int var230) {
    if (var230 <= 0) return 1;
    return 96;
}

int func307(int var193) {
    if (var193 <= 0) return 1;
    return 59;
}

int func484(int var413) {
    if (var413 <= 0) return 1;
    return 15;
}

int func235(int var37) {
    if (var37 <= 0) return 1;
    return func235(var37 - 1);
}


int main() {
    for (int var330 = 0; var330 < 14; var330++) {
        var330 += 2;
    }    int var109 = 0;
    while (var109 < 12) {
        var109 += 1;
        var109++;
    }    int var412 = 0;
    while (var412 < 18) {
        var412 += 5;
        var412++;
    }

    int var449 = 71;
    if (var449 % 2 == 0) {
        printf("var449 is even\n");
    } else {
        printf("var449 is odd\n");
    }

    return 0;
}
