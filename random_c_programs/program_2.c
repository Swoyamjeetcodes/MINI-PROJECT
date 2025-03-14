
#include <stdio.h>


int func17(int var81) {
    if (var81 <= 0) return 1;
    return 30;
}

int func607(int var707) {
    if (var707 <= 0) return 1;
    return 76;
}

int func625(int var5) {
    if (var5 <= 0) return 1;
    return 19;
}

int func188(int var538) {
    if (var538 <= 0) return 1;
    return func188(var538 - 1);
}

int func539(int var359) {
    if (var359 <= 0) return 1;
    return func539(var359 - 1);
}


int main() {
    int var573 = 0;
    while (var573 < 14) {
        var573 += 1;
        var573++;
    }    for (int var465 = 0; var465 < 19; var465++) {
        var465 += 3;
    }

    int var171 = 11;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    int var84 = 71;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
