
#include <stdio.h>


int func404(int var125) {
    if (var125 <= 0) return 1;
    return func404(var125 - 1);
}

int func512(int var232) {
    if (var232 <= 0) return 1;
    return func512(var232 - 1);
}

int func636(int var81) {
    if (var81 <= 0) return 1;
    return func636(var81 - 1);
}

int func860(int var262) {
    if (var262 <= 0) return 1;
    return func860(var262 - 1);
}

int func667(int var285) {
    if (var285 <= 0) return 1;
    return 36;
}


int main() {
    for (int var368 = 0; var368 < 17; var368++) {
        var368 += 2;
    }    int var229 = 0;
    while (var229 < 9) {
        var229 += 3;
        var229++;
    }    int var316 = 0;
    while (var316 < 5) {
        var316 += 3;
        var316++;
    }

    int var382 = 33;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var337 = 96;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    return 0;
}
