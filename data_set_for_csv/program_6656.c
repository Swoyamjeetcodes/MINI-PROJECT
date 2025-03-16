
#include <stdio.h>


int func273(int var767) {
    if (var767 <= 0) return 1;
    return func273(var767 - 1);
}

int func507(int var228) {
    if (var228 <= 0) return 1;
    return func507(var228 - 1);
}

int func113(int var907) {
    if (var907 <= 0) return 1;
    return 47;
}

int func305(int var28) {
    if (var28 <= 0) return 1;
    return 59;
}


int main() {
    int var955 = 0;
    while (var955 < 12) {
        var955 += 3;
        var955++;
    }    int var988 = 0;
    while (var988 < 9) {
        var988 += 4;
        var988++;
    }    for (int var543 = 0; var543 < 10; var543++) {
        var543 += 3;
    }

    int var223 = 67;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var581 = 31;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    return 0;
}
