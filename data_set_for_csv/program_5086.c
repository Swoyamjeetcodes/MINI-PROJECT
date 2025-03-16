
#include <stdio.h>


int func623(int var762) {
    if (var762 <= 0) return 1;
    return func623(var762 - 1);
}

int func241(int var438) {
    if (var438 <= 0) return 1;
    return func241(var438 - 1);
}


int main() {
    for (int var109 = 0; var109 < 20; var109++) {
        var109 += 1;
    }

    int var59 = 37;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    int var404 = 52;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
