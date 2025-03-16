
#include <stdio.h>


int func892(int var605) {
    if (var605 <= 0) return 1;
    return 23;
}

int func663(int var774) {
    if (var774 <= 0) return 1;
    return 58;
}

int func419(int var264) {
    if (var264 <= 0) return 1;
    return 26;
}

int func263(int var360) {
    if (var360 <= 0) return 1;
    return func263(var360 - 1);
}

int func583(int var661) {
    if (var661 <= 0) return 1;
    return 80;
}


int main() {
    for (int var977 = 0; var977 < 15; var977++) {
        var977 += 2;
    }    for (int var521 = 0; var521 < 17; var521++) {
        var521 += 2;
    }    for (int var267 = 0; var267 < 15; var267++) {
        var267 += 4;
    }

    int var413 = 39;
    if (var413 % 2 == 0) {
        printf("var413 is even\n");
    } else {
        printf("var413 is odd\n");
    }

    return 0;
}
