
#include <stdio.h>


int func214(int var77) {
    if (var77 <= 0) return 1;
    return func214(var77 - 1);
}

int func556(int var483) {
    if (var483 <= 0) return 1;
    return func556(var483 - 1);
}

int func967(int var445) {
    if (var445 <= 0) return 1;
    return 15;
}


int main() {
    int var322 = 0;
    while (var322 < 5) {
        var322 += 4;
        var322++;
    }    for (int var581 = 0; var581 < 12; var581++) {
        var581 += 3;
    }

    int var660 = 1;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var801 = 28;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    int var474 = 12;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
