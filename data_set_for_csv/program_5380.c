
#include <stdio.h>


int func484(int var571) {
    if (var571 <= 0) return 1;
    return func484(var571 - 1);
}

int func725(int var70) {
    if (var70 <= 0) return 1;
    return 20;
}

int func337(int var890) {
    if (var890 <= 0) return 1;
    return func337(var890 - 1);
}

int func907(int var410) {
    if (var410 <= 0) return 1;
    return func907(var410 - 1);
}


int main() {
    for (int var37 = 0; var37 < 15; var37++) {
        var37 += 4;
    }    for (int var681 = 0; var681 < 12; var681++) {
        var681 += 1;
    }

    int var154 = 77;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    int var146 = 4;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
