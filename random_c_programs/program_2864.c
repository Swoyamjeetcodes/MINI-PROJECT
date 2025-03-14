
#include <stdio.h>


int func596(int var252) {
    if (var252 <= 0) return 1;
    return func596(var252 - 1);
}

int func538(int var170) {
    if (var170 <= 0) return 1;
    return 69;
}

int func779(int var397) {
    if (var397 <= 0) return 1;
    return 85;
}

int func270(int var421) {
    if (var421 <= 0) return 1;
    return func270(var421 - 1);
}

int func510(int var864) {
    if (var864 <= 0) return 1;
    return func510(var864 - 1);
}


int main() {
    for (int var99 = 0; var99 < 6; var99++) {
        var99 += 4;
    }

    int var82 = 26;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}
