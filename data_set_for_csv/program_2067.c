
#include <stdio.h>


int func904(int var268) {
    if (var268 <= 0) return 1;
    return 77;
}

int func445(int var950) {
    if (var950 <= 0) return 1;
    return 50;
}

int func341(int var719) {
    if (var719 <= 0) return 1;
    return 9;
}

int func842(int var729) {
    if (var729 <= 0) return 1;
    return func842(var729 - 1);
}


int main() {
    for (int var578 = 0; var578 < 12; var578++) {
        var578 += 5;
    }    for (int var965 = 0; var965 < 15; var965++) {
        var965 += 1;
    }    for (int var289 = 0; var289 < 17; var289++) {
        var289 += 4;
    }

    int var497 = 16;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    int var211 = 31;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    int var838 = 71;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
