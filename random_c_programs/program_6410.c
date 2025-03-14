
#include <stdio.h>


int func676(int var262) {
    if (var262 <= 0) return 1;
    return func676(var262 - 1);
}

int func411(int var811) {
    if (var811 <= 0) return 1;
    return func411(var811 - 1);
}

int func404(int var611) {
    if (var611 <= 0) return 1;
    return 42;
}

int func512(int var721) {
    if (var721 <= 0) return 1;
    return func512(var721 - 1);
}

int func286(int var362) {
    if (var362 <= 0) return 1;
    return func286(var362 - 1);
}


int main() {
    int var88 = 0;
    while (var88 < 14) {
        var88 += 5;
        var88++;
    }    int var54 = 0;
    while (var54 < 10) {
        var54 += 2;
        var54++;
    }    for (int var159 = 0; var159 < 7; var159++) {
        var159 += 4;
    }

    int var626 = 46;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    return 0;
}
