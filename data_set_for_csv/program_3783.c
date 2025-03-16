
#include <stdio.h>


int func14(int var418) {
    if (var418 <= 0) return 1;
    return func14(var418 - 1);
}

int func919(int var322) {
    if (var322 <= 0) return 1;
    return func919(var322 - 1);
}


int main() {
    for (int var616 = 0; var616 < 8; var616++) {
        var616 += 1;
    }    int var952 = 0;
    while (var952 < 16) {
        var952 += 4;
        var952++;
    }

    int var436 = 67;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var908 = 67;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    return 0;
}
