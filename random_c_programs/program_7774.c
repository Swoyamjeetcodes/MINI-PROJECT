
#include <stdio.h>


int func175(int var230) {
    if (var230 <= 0) return 1;
    return func175(var230 - 1);
}

int func341(int var406) {
    if (var406 <= 0) return 1;
    return 28;
}

int func636(int var602) {
    if (var602 <= 0) return 1;
    return 65;
}


int main() {
    int var664 = 0;
    while (var664 < 16) {
        var664 += 2;
        var664++;
    }    for (int var239 = 0; var239 < 18; var239++) {
        var239 += 1;
    }

    int var754 = 18;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    int var88 = 35;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
