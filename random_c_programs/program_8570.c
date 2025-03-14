
#include <stdio.h>


int func2(int var320) {
    if (var320 <= 0) return 1;
    return func2(var320 - 1);
}

int func182(int var912) {
    if (var912 <= 0) return 1;
    return func182(var912 - 1);
}

int func461(int var6) {
    if (var6 <= 0) return 1;
    return 60;
}

int func226(int var457) {
    if (var457 <= 0) return 1;
    return func226(var457 - 1);
}

int func778(int var805) {
    if (var805 <= 0) return 1;
    return func778(var805 - 1);
}


int main() {
    int var529 = 0;
    while (var529 < 9) {
        var529 += 3;
        var529++;
    }

    int var72 = 47;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    int var399 = 87;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    int var501 = 47;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    return 0;
}
