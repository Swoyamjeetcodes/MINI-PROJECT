
#include <stdio.h>


int func989(int var294) {
    if (var294 <= 0) return 1;
    return func989(var294 - 1);
}

int func969(int var585) {
    if (var585 <= 0) return 1;
    return 45;
}

int func846(int var827) {
    if (var827 <= 0) return 1;
    return 14;
}

int func455(int var544) {
    if (var544 <= 0) return 1;
    return 57;
}


int main() {
    int var617 = 0;
    while (var617 < 20) {
        var617 += 3;
        var617++;
    }    int var131 = 0;
    while (var131 < 19) {
        var131 += 1;
        var131++;
    }

    int var260 = 100;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    int var414 = 28;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
