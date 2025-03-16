
#include <stdio.h>


int func206(int var400) {
    if (var400 <= 0) return 1;
    return func206(var400 - 1);
}

int func363(int var243) {
    if (var243 <= 0) return 1;
    return func363(var243 - 1);
}

int func819(int var707) {
    if (var707 <= 0) return 1;
    return func819(var707 - 1);
}

int func164(int var361) {
    if (var361 <= 0) return 1;
    return 84;
}

int func344(int var753) {
    if (var753 <= 0) return 1;
    return 20;
}


int main() {
    for (int var25 = 0; var25 < 20; var25++) {
        var25 += 4;
    }    for (int var358 = 0; var358 < 14; var358++) {
        var358 += 5;
    }    for (int var208 = 0; var208 < 12; var208++) {
        var208 += 3;
    }

    int var362 = 97;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var285 = 62;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    int var955 = 59;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    return 0;
}
