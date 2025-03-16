
#include <stdio.h>


int func538(int var270) {
    if (var270 <= 0) return 1;
    return func538(var270 - 1);
}

int func238(int var920) {
    if (var920 <= 0) return 1;
    return func238(var920 - 1);
}

int func936(int var715) {
    if (var715 <= 0) return 1;
    return 17;
}

int func899(int var987) {
    if (var987 <= 0) return 1;
    return 98;
}

int func568(int var440) {
    if (var440 <= 0) return 1;
    return func568(var440 - 1);
}


int main() {
    int var511 = 0;
    while (var511 < 10) {
        var511 += 3;
        var511++;
    }    int var108 = 0;
    while (var108 < 11) {
        var108 += 5;
        var108++;
    }

    int var163 = 99;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    int var671 = 81;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
