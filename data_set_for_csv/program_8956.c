
#include <stdio.h>


int func199(int var157) {
    if (var157 <= 0) return 1;
    return func199(var157 - 1);
}

int func105(int var697) {
    if (var697 <= 0) return 1;
    return func105(var697 - 1);
}

int func440(int var875) {
    if (var875 <= 0) return 1;
    return func440(var875 - 1);
}

int func828(int var153) {
    if (var153 <= 0) return 1;
    return 57;
}


int main() {
    for (int var437 = 0; var437 < 5; var437++) {
        var437 += 2;
    }    int var381 = 0;
    while (var381 < 15) {
        var381 += 5;
        var381++;
    }    for (int var539 = 0; var539 < 16; var539++) {
        var539 += 3;
    }    int var289 = 0;
    while (var289 < 12) {
        var289 += 2;
        var289++;
    }    int var816 = 0;
    while (var816 < 13) {
        var816 += 4;
        var816++;
    }

    int var75 = 35;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    return 0;
}
