
#include <stdio.h>


int func265(int var714) {
    if (var714 <= 0) return 1;
    return func265(var714 - 1);
}

int func854(int var183) {
    if (var183 <= 0) return 1;
    return func854(var183 - 1);
}

int func876(int var846) {
    if (var846 <= 0) return 1;
    return func876(var846 - 1);
}

int func160(int var824) {
    if (var824 <= 0) return 1;
    return 21;
}

int func126(int var482) {
    if (var482 <= 0) return 1;
    return 68;
}


int main() {
    int var114 = 0;
    while (var114 < 5) {
        var114 += 5;
        var114++;
    }    for (int var648 = 0; var648 < 7; var648++) {
        var648 += 1;
    }    int var223 = 0;
    while (var223 < 12) {
        var223 += 4;
        var223++;
    }

    int var693 = 32;
    if (var693 % 2 == 0) {
        printf("var693 is even\n");
    } else {
        printf("var693 is odd\n");
    }

    int var976 = 7;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    int var454 = 20;
    if (var454 % 2 == 0) {
        printf("var454 is even\n");
    } else {
        printf("var454 is odd\n");
    }

    return 0;
}
