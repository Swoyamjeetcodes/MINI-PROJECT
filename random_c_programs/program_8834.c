
#include <stdio.h>


int func504(int var846) {
    if (var846 <= 0) return 1;
    return 80;
}

int func169(int var169) {
    if (var169 <= 0) return 1;
    return 60;
}

int func67(int var242) {
    if (var242 <= 0) return 1;
    return func67(var242 - 1);
}

int func22(int var749) {
    if (var749 <= 0) return 1;
    return func22(var749 - 1);
}


int main() {
    int var368 = 0;
    while (var368 < 14) {
        var368 += 4;
        var368++;
    }    int var625 = 0;
    while (var625 < 6) {
        var625 += 4;
        var625++;
    }    for (int var34 = 0; var34 < 11; var34++) {
        var34 += 1;
    }

    int var746 = 44;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
