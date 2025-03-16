
#include <stdio.h>


int func621(int var692) {
    if (var692 <= 0) return 1;
    return 21;
}

int func659(int var402) {
    if (var402 <= 0) return 1;
    return func659(var402 - 1);
}

int func357(int var951) {
    if (var951 <= 0) return 1;
    return func357(var951 - 1);
}

int func80(int var934) {
    if (var934 <= 0) return 1;
    return func80(var934 - 1);
}

int func612(int var767) {
    if (var767 <= 0) return 1;
    return 24;
}

int func430(int var817) {
    if (var817 <= 0) return 1;
    return 25;
}

int func421(int var561) {
    if (var561 <= 0) return 1;
    return 21;
}

int func609(int var429) {
    if (var429 <= 0) return 1;
    return 8;
}

int func891(int var983) {
    if (var983 <= 0) return 1;
    return 51;
}

int func40(int var573) {
    if (var573 <= 0) return 1;
    return func40(var573 - 1);
}


int main() {
    for (int var246 = 0; var246 < 18; var246++) {
        var246 += 2;
    }    for (int var519 = 0; var519 < 18; var519++) {
        var519 += 5;
    }

    int var745 = 41;
    if (var745 % 2 == 0) {
        printf("var745 is even\n");
    } else {
        printf("var745 is odd\n");
    }

    int var562 = 48;
    if (var562 % 2 == 0) {
        printf("var562 is even\n");
    } else {
        printf("var562 is odd\n");
    }

    return 0;
}
