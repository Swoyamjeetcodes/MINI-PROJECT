
#include <stdio.h>


int func810(int var855) {
    if (var855 <= 0) return 1;
    return 84;
}

int func549(int var261) {
    if (var261 <= 0) return 1;
    return func549(var261 - 1);
}

int func625(int var920) {
    if (var920 <= 0) return 1;
    return func625(var920 - 1);
}


int main() {
    for (int var645 = 0; var645 < 7; var645++) {
        var645 += 5;
    }    for (int var886 = 0; var886 < 9; var886++) {
        var886 += 2;
    }    for (int var254 = 0; var254 < 11; var254++) {
        var254 += 1;
    }

    int var404 = 15;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    int var679 = 30;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    return 0;
}
