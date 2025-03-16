
#include <stdio.h>


int func671(int var16) {
    if (var16 <= 0) return 1;
    return func671(var16 - 1);
}

int func599(int var291) {
    if (var291 <= 0) return 1;
    return func599(var291 - 1);
}

int func959(int var624) {
    if (var624 <= 0) return 1;
    return 29;
}

int func856(int var837) {
    if (var837 <= 0) return 1;
    return 33;
}


int main() {
    for (int var360 = 0; var360 < 20; var360++) {
        var360 += 4;
    }    for (int var651 = 0; var651 < 13; var651++) {
        var651 += 2;
    }

    int var715 = 83;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var571 = 90;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    return 0;
}
