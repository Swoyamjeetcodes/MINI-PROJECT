
#include <stdio.h>


int func291(int var62) {
    if (var62 <= 0) return 1;
    return 9;
}

int func688(int var97) {
    if (var97 <= 0) return 1;
    return func688(var97 - 1);
}

int func557(int var394) {
    if (var394 <= 0) return 1;
    return func557(var394 - 1);
}


int main() {
    int var984 = 0;
    while (var984 < 18) {
        var984 += 4;
        var984++;
    }    for (int var659 = 0; var659 < 15; var659++) {
        var659 += 5;
    }

    int var889 = 62;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    int var792 = 77;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
