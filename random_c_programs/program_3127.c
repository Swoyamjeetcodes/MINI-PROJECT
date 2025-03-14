
#include <stdio.h>


int func224(int var497) {
    if (var497 <= 0) return 1;
    return 91;
}

int func916(int var61) {
    if (var61 <= 0) return 1;
    return func916(var61 - 1);
}

int func334(int var837) {
    if (var837 <= 0) return 1;
    return 74;
}

int func871(int var303) {
    if (var303 <= 0) return 1;
    return 86;
}


int main() {
    for (int var697 = 0; var697 < 10; var697++) {
        var697 += 2;
    }    for (int var513 = 0; var513 < 12; var513++) {
        var513 += 2;
    }    int var529 = 0;
    while (var529 < 14) {
        var529 += 2;
        var529++;
    }

    int var280 = 80;
    if (var280 % 2 == 0) {
        printf("var280 is even\n");
    } else {
        printf("var280 is odd\n");
    }

    int var222 = 12;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
