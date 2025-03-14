
#include <stdio.h>


int func213(int var711) {
    if (var711 <= 0) return 1;
    return 77;
}

int func465(int var842) {
    if (var842 <= 0) return 1;
    return func465(var842 - 1);
}

int func745(int var980) {
    if (var980 <= 0) return 1;
    return 16;
}

int func720(int var107) {
    if (var107 <= 0) return 1;
    return func720(var107 - 1);
}

int func296(int var636) {
    if (var636 <= 0) return 1;
    return func296(var636 - 1);
}


int main() {
    int var776 = 0;
    while (var776 < 8) {
        var776 += 4;
        var776++;
    }

    int var306 = 46;
    if (var306 % 2 == 0) {
        printf("var306 is even\n");
    } else {
        printf("var306 is odd\n");
    }

    return 0;
}
