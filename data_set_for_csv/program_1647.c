
#include <stdio.h>


int func676(int var502) {
    if (var502 <= 0) return 1;
    return func676(var502 - 1);
}

int func675(int var629) {
    if (var629 <= 0) return 1;
    return 1;
}

int func362(int var58) {
    if (var58 <= 0) return 1;
    return 55;
}

int func374(int var523) {
    if (var523 <= 0) return 1;
    return func374(var523 - 1);
}

int func92(int var677) {
    if (var677 <= 0) return 1;
    return 99;
}


int main() {
    for (int var852 = 0; var852 < 18; var852++) {
        var852 += 5;
    }    int var102 = 0;
    while (var102 < 17) {
        var102 += 5;
        var102++;
    }    for (int var822 = 0; var822 < 9; var822++) {
        var822 += 4;
    }    int var145 = 0;
    while (var145 < 11) {
        var145 += 5;
        var145++;
    }

    int var48 = 7;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    int var272 = 56;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    int var840 = 91;
    if (var840 % 2 == 0) {
        printf("var840 is even\n");
    } else {
        printf("var840 is odd\n");
    }

    int var401 = 72;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    return 0;
}
