
#include <stdio.h>


int func194(int var28) {
    if (var28 <= 0) return 1;
    return func194(var28 - 1);
}

int func815(int var162) {
    if (var162 <= 0) return 1;
    return 98;
}

int func692(int var772) {
    if (var772 <= 0) return 1;
    return func692(var772 - 1);
}


int main() {
    for (int var270 = 0; var270 < 6; var270++) {
        var270 += 1;
    }    for (int var71 = 0; var71 < 12; var71++) {
        var71 += 1;
    }

    int var639 = 60;
    if (var639 % 2 == 0) {
        printf("var639 is even\n");
    } else {
        printf("var639 is odd\n");
    }

    int var158 = 69;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    return 0;
}
