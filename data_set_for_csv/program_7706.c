
#include <stdio.h>


int func689(int var707) {
    if (var707 <= 0) return 1;
    return 66;
}

int func401(int var910) {
    if (var910 <= 0) return 1;
    return func401(var910 - 1);
}

int func672(int var974) {
    if (var974 <= 0) return 1;
    return 41;
}

int func418(int var808) {
    if (var808 <= 0) return 1;
    return func418(var808 - 1);
}

int func406(int var939) {
    if (var939 <= 0) return 1;
    return 74;
}


int main() {
    for (int var530 = 0; var530 < 19; var530++) {
        var530 += 5;
    }

    int var87 = 14;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
