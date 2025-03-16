
#include <stdio.h>


int func112(int var947) {
    if (var947 <= 0) return 1;
    return func112(var947 - 1);
}

int func359(int var660) {
    if (var660 <= 0) return 1;
    return 8;
}


int main() {
    for (int var101 = 0; var101 < 20; var101++) {
        var101 += 5;
    }    for (int var554 = 0; var554 < 9; var554++) {
        var554 += 2;
    }    int var748 = 0;
    while (var748 < 15) {
        var748 += 2;
        var748++;
    }    for (int var990 = 0; var990 < 10; var990++) {
        var990 += 5;
    }    for (int var322 = 0; var322 < 15; var322++) {
        var322 += 1;
    }    for (int var355 = 0; var355 < 7; var355++) {
        var355 += 2;
    }

    int var507 = 86;
    if (var507 % 2 == 0) {
        printf("var507 is even\n");
    } else {
        printf("var507 is odd\n");
    }

    int var349 = 63;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
