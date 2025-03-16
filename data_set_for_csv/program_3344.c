
#include <stdio.h>


int func244(int var99) {
    if (var99 <= 0) return 1;
    return func244(var99 - 1);
}

int func380(int var841) {
    if (var841 <= 0) return 1;
    return 100;
}

int func823(int var588) {
    if (var588 <= 0) return 1;
    return 44;
}

int func979(int var333) {
    if (var333 <= 0) return 1;
    return func979(var333 - 1);
}


int main() {
    int var192 = 0;
    while (var192 < 12) {
        var192 += 2;
        var192++;
    }

    int var873 = 14;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    int var93 = 90;
    if (var93 % 2 == 0) {
        printf("var93 is even\n");
    } else {
        printf("var93 is odd\n");
    }

    return 0;
}
