
#include <stdio.h>


int func604(int var265) {
    if (var265 <= 0) return 1;
    return func604(var265 - 1);
}

int func688(int var747) {
    if (var747 <= 0) return 1;
    return 21;
}

int func347(int var430) {
    if (var430 <= 0) return 1;
    return func347(var430 - 1);
}

int func757(int var200) {
    if (var200 <= 0) return 1;
    return func757(var200 - 1);
}


int main() {
    for (int var611 = 0; var611 < 16; var611++) {
        var611 += 5;
    }    int var322 = 0;
    while (var322 < 13) {
        var322 += 2;
        var322++;
    }    int var276 = 0;
    while (var276 < 5) {
        var276 += 5;
        var276++;
    }    for (int var954 = 0; var954 < 10; var954++) {
        var954 += 4;
    }

    int var419 = 83;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    int var29 = 38;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    int var65 = 10;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    int var658 = 27;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
