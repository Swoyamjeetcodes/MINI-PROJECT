
#include <stdio.h>


int func935(int var633) {
    if (var633 <= 0) return 1;
    return func935(var633 - 1);
}

int func288(int var865) {
    if (var865 <= 0) return 1;
    return 65;
}

int func760(int var247) {
    if (var247 <= 0) return 1;
    return func760(var247 - 1);
}

int func918(int var265) {
    if (var265 <= 0) return 1;
    return func918(var265 - 1);
}

int func698(int var556) {
    if (var556 <= 0) return 1;
    return func698(var556 - 1);
}

int func501(int var18) {
    if (var18 <= 0) return 1;
    return 5;
}


int main() {
    for (int var762 = 0; var762 < 20; var762++) {
        var762 += 2;
    }    for (int var322 = 0; var322 < 11; var322++) {
        var322 += 4;
    }    int var664 = 0;
    while (var664 < 9) {
        var664 += 5;
        var664++;
    }

    int var636 = 29;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    int var947 = 52;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    int var561 = 62;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    return 0;
}
