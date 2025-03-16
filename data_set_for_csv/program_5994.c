
#include <stdio.h>


int func185(int var820) {
    if (var820 <= 0) return 1;
    return 7;
}

int func520(int var615) {
    if (var615 <= 0) return 1;
    return func520(var615 - 1);
}

int func60(int var176) {
    if (var176 <= 0) return 1;
    return func60(var176 - 1);
}

int func682(int var867) {
    if (var867 <= 0) return 1;
    return 94;
}


int main() {
    int var961 = 0;
    while (var961 < 17) {
        var961 += 4;
        var961++;
    }    int var550 = 0;
    while (var550 < 17) {
        var550 += 3;
        var550++;
    }

    int var72 = 71;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    return 0;
}
