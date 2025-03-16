
#include <stdio.h>


int func423(int var25) {
    if (var25 <= 0) return 1;
    return 76;
}

int func775(int var260) {
    if (var260 <= 0) return 1;
    return func775(var260 - 1);
}

int func318(int var181) {
    if (var181 <= 0) return 1;
    return func318(var181 - 1);
}

int func894(int var687) {
    if (var687 <= 0) return 1;
    return func894(var687 - 1);
}

int func212(int var726) {
    if (var726 <= 0) return 1;
    return func212(var726 - 1);
}


int main() {
    int var688 = 0;
    while (var688 < 16) {
        var688 += 1;
        var688++;
    }

    int var581 = 0;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    int var244 = 10;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var622 = 72;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
