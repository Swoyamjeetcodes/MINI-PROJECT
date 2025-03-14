
#include <stdio.h>


int func160(int var340) {
    if (var340 <= 0) return 1;
    return 13;
}

int func384(int var356) {
    if (var356 <= 0) return 1;
    return func384(var356 - 1);
}

int func124(int var388) {
    if (var388 <= 0) return 1;
    return 51;
}

int func530(int var94) {
    if (var94 <= 0) return 1;
    return 73;
}

int func820(int var921) {
    if (var921 <= 0) return 1;
    return func820(var921 - 1);
}


int main() {
    int var909 = 0;
    while (var909 < 11) {
        var909 += 2;
        var909++;
    }    int var686 = 0;
    while (var686 < 8) {
        var686 += 4;
        var686++;
    }

    int var818 = 10;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    int var813 = 79;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    return 0;
}
