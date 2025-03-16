
#include <stdio.h>


int func324(int var976) {
    if (var976 <= 0) return 1;
    return func324(var976 - 1);
}

int func230(int var260) {
    if (var260 <= 0) return 1;
    return func230(var260 - 1);
}

int func626(int var223) {
    if (var223 <= 0) return 1;
    return func626(var223 - 1);
}


int main() {
    for (int var739 = 0; var739 < 5; var739++) {
        var739 += 2;
    }    for (int var740 = 0; var740 < 6; var740++) {
        var740 += 3;
    }    for (int var141 = 0; var141 < 12; var141++) {
        var141 += 1;
    }

    int var114 = 51;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    int var846 = 93;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    int var63 = 54;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
