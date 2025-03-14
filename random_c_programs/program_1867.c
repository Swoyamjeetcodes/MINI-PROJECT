
#include <stdio.h>


int func150(int var306) {
    if (var306 <= 0) return 1;
    return func150(var306 - 1);
}

int func14(int var630) {
    if (var630 <= 0) return 1;
    return func14(var630 - 1);
}

int func246(int var791) {
    if (var791 <= 0) return 1;
    return 93;
}

int func82(int var184) {
    if (var184 <= 0) return 1;
    return func82(var184 - 1);
}


int main() {
    int var786 = 0;
    while (var786 < 20) {
        var786 += 5;
        var786++;
    }

    int var81 = 90;
    if (var81 % 2 == 0) {
        printf("var81 is even\n");
    } else {
        printf("var81 is odd\n");
    }

    int var31 = 32;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    return 0;
}
