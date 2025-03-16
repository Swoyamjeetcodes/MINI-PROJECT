
#include <stdio.h>


int func111(int var668) {
    if (var668 <= 0) return 1;
    return func111(var668 - 1);
}

int func509(int var132) {
    if (var132 <= 0) return 1;
    return 4;
}

int func185(int var447) {
    if (var447 <= 0) return 1;
    return 83;
}

int func540(int var234) {
    if (var234 <= 0) return 1;
    return 80;
}

int func400(int var983) {
    if (var983 <= 0) return 1;
    return 26;
}


int main() {
    int var857 = 0;
    while (var857 < 18) {
        var857 += 4;
        var857++;
    }

    int var766 = 30;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var137 = 94;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
