
#include <stdio.h>


int func22(int var764) {
    if (var764 <= 0) return 1;
    return 64;
}

int func462(int var717) {
    if (var717 <= 0) return 1;
    return 76;
}

int func182(int var913) {
    if (var913 <= 0) return 1;
    return 83;
}

int func454(int var715) {
    if (var715 <= 0) return 1;
    return 3;
}

int func29(int var844) {
    if (var844 <= 0) return 1;
    return func29(var844 - 1);
}


int main() {
    for (int var42 = 0; var42 < 11; var42++) {
        var42 += 3;
    }    for (int var726 = 0; var726 < 13; var726++) {
        var726 += 2;
    }    int var997 = 0;
    while (var997 < 11) {
        var997 += 4;
        var997++;
    }

    int var796 = 38;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    int var124 = 91;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    return 0;
}
