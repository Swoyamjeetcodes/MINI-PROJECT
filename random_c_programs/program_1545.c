
#include <stdio.h>


int func246(int var245) {
    if (var245 <= 0) return 1;
    return func246(var245 - 1);
}

int func801(int var848) {
    if (var848 <= 0) return 1;
    return func801(var848 - 1);
}

int func368(int var298) {
    if (var298 <= 0) return 1;
    return func368(var298 - 1);
}

int func876(int var21) {
    if (var21 <= 0) return 1;
    return func876(var21 - 1);
}


int main() {
    for (int var246 = 0; var246 < 6; var246++) {
        var246 += 3;
    }    int var273 = 0;
    while (var273 < 5) {
        var273 += 3;
        var273++;
    }    int var233 = 0;
    while (var233 < 10) {
        var233 += 2;
        var233++;
    }

    int var849 = 11;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    return 0;
}
