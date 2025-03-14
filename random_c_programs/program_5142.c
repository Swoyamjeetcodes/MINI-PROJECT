
#include <stdio.h>


int func551(int var569) {
    if (var569 <= 0) return 1;
    return 23;
}

int func520(int var179) {
    if (var179 <= 0) return 1;
    return func520(var179 - 1);
}

int func257(int var436) {
    if (var436 <= 0) return 1;
    return 24;
}

int func225(int var723) {
    if (var723 <= 0) return 1;
    return 100;
}


int main() {
    int var797 = 0;
    while (var797 < 14) {
        var797 += 1;
        var797++;
    }

    int var399 = 12;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    int var151 = 3;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    int var882 = 91;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
