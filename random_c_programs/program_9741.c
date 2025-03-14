
#include <stdio.h>


int func67(int var395) {
    if (var395 <= 0) return 1;
    return func67(var395 - 1);
}

int func217(int var904) {
    if (var904 <= 0) return 1;
    return func217(var904 - 1);
}


int main() {
    int var45 = 0;
    while (var45 < 8) {
        var45 += 1;
        var45++;
    }

    int var93 = 19;
    if (var93 % 2 == 0) {
        printf("var93 is even\n");
    } else {
        printf("var93 is odd\n");
    }

    int var786 = 85;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    int var354 = 88;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
