
#include <stdio.h>


int func29(int var893) {
    if (var893 <= 0) return 1;
    return 17;
}

int func105(int var660) {
    if (var660 <= 0) return 1;
    return 41;
}

int func662(int var185) {
    if (var185 <= 0) return 1;
    return func662(var185 - 1);
}


int main() {
    for (int var568 = 0; var568 < 20; var568++) {
        var568 += 3;
    }

    int var958 = 99;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    return 0;
}
