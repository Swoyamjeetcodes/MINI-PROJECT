
#include <stdio.h>


int func812(int var878) {
    if (var878 <= 0) return 1;
    return func812(var878 - 1);
}

int func322(int var988) {
    if (var988 <= 0) return 1;
    return func322(var988 - 1);
}

int func862(int var300) {
    if (var300 <= 0) return 1;
    return func862(var300 - 1);
}

int func14(int var819) {
    if (var819 <= 0) return 1;
    return func14(var819 - 1);
}


int main() {
    int var624 = 0;
    while (var624 < 19) {
        var624 += 3;
        var624++;
    }    int var723 = 0;
    while (var723 < 9) {
        var723 += 5;
        var723++;
    }

    int var708 = 83;
    if (var708 % 2 == 0) {
        printf("var708 is even\n");
    } else {
        printf("var708 is odd\n");
    }

    int var685 = 41;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    return 0;
}
