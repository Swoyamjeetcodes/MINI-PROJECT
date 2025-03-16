
#include <stdio.h>


int func189(int var671) {
    if (var671 <= 0) return 1;
    return func189(var671 - 1);
}

int func40(int var582) {
    if (var582 <= 0) return 1;
    return func40(var582 - 1);
}

int func73(int var559) {
    if (var559 <= 0) return 1;
    return 17;
}

int func569(int var588) {
    if (var588 <= 0) return 1;
    return 76;
}


int main() {
    for (int var21 = 0; var21 < 18; var21++) {
        var21 += 2;
    }    for (int var185 = 0; var185 < 12; var185++) {
        var185 += 4;
    }

    int var553 = 11;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
