
#include <stdio.h>


int func248(int var948) {
    if (var948 <= 0) return 1;
    return 90;
}

int func497(int var189) {
    if (var189 <= 0) return 1;
    return 86;
}

int func112(int var79) {
    if (var79 <= 0) return 1;
    return 40;
}

int func822(int var259) {
    if (var259 <= 0) return 1;
    return 59;
}

int func848(int var322) {
    if (var322 <= 0) return 1;
    return func848(var322 - 1);
}


int main() {
    int var808 = 0;
    while (var808 < 16) {
        var808 += 3;
        var808++;
    }    for (int var296 = 0; var296 < 5; var296++) {
        var296 += 2;
    }

    int var271 = 51;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    return 0;
}
