
#include <stdio.h>


int func213(int var681) {
    if (var681 <= 0) return 1;
    return 83;
}

int func361(int var375) {
    if (var375 <= 0) return 1;
    return func361(var375 - 1);
}


int main() {
    for (int var214 = 0; var214 < 12; var214++) {
        var214 += 4;
    }

    int var698 = 15;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    int var889 = 16;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    return 0;
}
