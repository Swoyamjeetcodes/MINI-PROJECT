
#include <stdio.h>


int func803(int var838) {
    if (var838 <= 0) return 1;
    return func803(var838 - 1);
}

int func912(int var904) {
    if (var904 <= 0) return 1;
    return func912(var904 - 1);
}

int func233(int var480) {
    if (var480 <= 0) return 1;
    return 58;
}

int func884(int var425) {
    if (var425 <= 0) return 1;
    return func884(var425 - 1);
}

int func401(int var413) {
    if (var413 <= 0) return 1;
    return 72;
}


int main() {
    for (int var641 = 0; var641 < 13; var641++) {
        var641 += 3;
    }    int var763 = 0;
    while (var763 < 14) {
        var763 += 4;
        var763++;
    }    for (int var488 = 0; var488 < 5; var488++) {
        var488 += 4;
    }

    int var429 = 18;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    return 0;
}
