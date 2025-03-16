
#include <stdio.h>


int func789(int var739) {
    if (var739 <= 0) return 1;
    return func789(var739 - 1);
}

int func538(int var244) {
    if (var244 <= 0) return 1;
    return func538(var244 - 1);
}

int func536(int var743) {
    if (var743 <= 0) return 1;
    return 31;
}

int func241(int var564) {
    if (var564 <= 0) return 1;
    return func241(var564 - 1);
}

int func954(int var660) {
    if (var660 <= 0) return 1;
    return func954(var660 - 1);
}


int main() {
    for (int var130 = 0; var130 < 13; var130++) {
        var130 += 2;
    }    for (int var803 = 0; var803 < 14; var803++) {
        var803 += 4;
    }    int var584 = 0;
    while (var584 < 7) {
        var584 += 2;
        var584++;
    }

    int var315 = 39;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    int var187 = 14;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    int var674 = 3;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
