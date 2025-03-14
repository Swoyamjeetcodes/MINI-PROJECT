
#include <stdio.h>


int func353(int var72) {
    if (var72 <= 0) return 1;
    return func353(var72 - 1);
}

int func74(int var483) {
    if (var483 <= 0) return 1;
    return func74(var483 - 1);
}

int func616(int var111) {
    if (var111 <= 0) return 1;
    return 23;
}

int func766(int var505) {
    if (var505 <= 0) return 1;
    return 70;
}

int func893(int var807) {
    if (var807 <= 0) return 1;
    return func893(var807 - 1);
}


int main() {
    for (int var539 = 0; var539 < 5; var539++) {
        var539 += 1;
    }    for (int var744 = 0; var744 < 9; var744++) {
        var744 += 4;
    }    int var725 = 0;
    while (var725 < 7) {
        var725 += 2;
        var725++;
    }

    int var246 = 62;
    if (var246 % 2 == 0) {
        printf("var246 is even\n");
    } else {
        printf("var246 is odd\n");
    }

    return 0;
}
