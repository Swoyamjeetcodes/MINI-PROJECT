
#include <stdio.h>


int func838(int var342) {
    if (var342 <= 0) return 1;
    return func838(var342 - 1);
}

int func542(int var569) {
    if (var569 <= 0) return 1;
    return func542(var569 - 1);
}

int func938(int var488) {
    if (var488 <= 0) return 1;
    return 95;
}


int main() {
    int var829 = 0;
    while (var829 < 7) {
        var829 += 2;
        var829++;
    }    int var979 = 0;
    while (var979 < 17) {
        var979 += 5;
        var979++;
    }

    int var21 = 11;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    int var759 = 50;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    return 0;
}
