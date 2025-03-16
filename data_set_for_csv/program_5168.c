
#include <stdio.h>


int func782(int var154) {
    if (var154 <= 0) return 1;
    return func782(var154 - 1);
}

int func57(int var454) {
    if (var454 <= 0) return 1;
    return func57(var454 - 1);
}

int func299(int var742) {
    if (var742 <= 0) return 1;
    return 53;
}

int func373(int var941) {
    if (var941 <= 0) return 1;
    return 72;
}

int func774(int var996) {
    if (var996 <= 0) return 1;
    return 3;
}


int main() {
    int var375 = 0;
    while (var375 < 7) {
        var375 += 2;
        var375++;
    }    for (int var151 = 0; var151 < 12; var151++) {
        var151 += 1;
    }

    int var156 = 25;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    return 0;
}
