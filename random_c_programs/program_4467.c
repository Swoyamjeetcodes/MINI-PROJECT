
#include <stdio.h>


int func620(int var246) {
    if (var246 <= 0) return 1;
    return func620(var246 - 1);
}

int func310(int var666) {
    if (var666 <= 0) return 1;
    return func310(var666 - 1);
}

int func596(int var927) {
    if (var927 <= 0) return 1;
    return 71;
}

int func788(int var742) {
    if (var742 <= 0) return 1;
    return func788(var742 - 1);
}


int main() {
    for (int var280 = 0; var280 < 14; var280++) {
        var280 += 4;
    }    int var869 = 0;
    while (var869 < 7) {
        var869 += 4;
        var869++;
    }

    int var706 = 39;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    int var337 = 36;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    int var406 = 24;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    return 0;
}
