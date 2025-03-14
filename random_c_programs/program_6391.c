
#include <stdio.h>


int func986(int var791) {
    if (var791 <= 0) return 1;
    return 50;
}

int func54(int var748) {
    if (var748 <= 0) return 1;
    return func54(var748 - 1);
}

int func92(int var236) {
    if (var236 <= 0) return 1;
    return 99;
}


int main() {
    for (int var428 = 0; var428 < 17; var428++) {
        var428 += 1;
    }

    int var646 = 21;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
