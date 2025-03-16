
#include <stdio.h>


int func139(int var121) {
    if (var121 <= 0) return 1;
    return func139(var121 - 1);
}

int func328(int var533) {
    if (var533 <= 0) return 1;
    return func328(var533 - 1);
}

int func129(int var195) {
    if (var195 <= 0) return 1;
    return 64;
}

int func244(int var639) {
    if (var639 <= 0) return 1;
    return 20;
}


int main() {
    int var649 = 0;
    while (var649 < 15) {
        var649 += 1;
        var649++;
    }    int var173 = 0;
    while (var173 < 14) {
        var173 += 3;
        var173++;
    }

    int var247 = 35;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    int var285 = 86;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    return 0;
}
