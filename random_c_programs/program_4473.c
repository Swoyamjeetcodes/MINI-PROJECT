
#include <stdio.h>


int func676(int var513) {
    if (var513 <= 0) return 1;
    return func676(var513 - 1);
}

int func416(int var651) {
    if (var651 <= 0) return 1;
    return 98;
}

int func54(int var223) {
    if (var223 <= 0) return 1;
    return 35;
}


int main() {
    for (int var85 = 0; var85 < 19; var85++) {
        var85 += 4;
    }    int var442 = 0;
    while (var442 < 8) {
        var442 += 2;
        var442++;
    }

    int var47 = 31;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
