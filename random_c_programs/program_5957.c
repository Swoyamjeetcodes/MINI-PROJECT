
#include <stdio.h>


int func588(int var59) {
    if (var59 <= 0) return 1;
    return 25;
}

int func702(int var423) {
    if (var423 <= 0) return 1;
    return func702(var423 - 1);
}

int func965(int var110) {
    if (var110 <= 0) return 1;
    return func965(var110 - 1);
}

int func981(int var374) {
    if (var374 <= 0) return 1;
    return func981(var374 - 1);
}

int func145(int var949) {
    if (var949 <= 0) return 1;
    return func145(var949 - 1);
}

int func310(int var510) {
    if (var510 <= 0) return 1;
    return 47;
}

int func814(int var322) {
    if (var322 <= 0) return 1;
    return 16;
}

int func404(int var664) {
    if (var664 <= 0) return 1;
    return 97;
}

int func685(int var623) {
    if (var623 <= 0) return 1;
    return 27;
}


int main() {
    for (int var842 = 0; var842 < 11; var842++) {
        var842 += 4;
    }    for (int var624 = 0; var624 < 15; var624++) {
        var624 += 4;
    }

    int var200 = 58;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
