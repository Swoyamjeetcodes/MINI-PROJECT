
#include <stdio.h>


int func202(int var897) {
    if (var897 <= 0) return 1;
    return func202(var897 - 1);
}

int func17(int var800) {
    if (var800 <= 0) return 1;
    return func17(var800 - 1);
}

int func195(int var255) {
    if (var255 <= 0) return 1;
    return 44;
}

int func245(int var721) {
    if (var721 <= 0) return 1;
    return func245(var721 - 1);
}

int func25(int var363) {
    if (var363 <= 0) return 1;
    return func25(var363 - 1);
}

int func686(int var405) {
    if (var405 <= 0) return 1;
    return 58;
}

int func33(int var817) {
    if (var817 <= 0) return 1;
    return func33(var817 - 1);
}

int func286(int var871) {
    if (var871 <= 0) return 1;
    return 22;
}


int main() {
    for (int var468 = 0; var468 < 6; var468++) {
        var468 += 2;
    }    int var828 = 0;
    while (var828 < 18) {
        var828 += 3;
        var828++;
    }

    int var315 = 24;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    int var47 = 39;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
