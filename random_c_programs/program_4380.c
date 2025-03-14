
#include <stdio.h>


int func125(int var273) {
    if (var273 <= 0) return 1;
    return 41;
}

int func138(int var776) {
    if (var776 <= 0) return 1;
    return func138(var776 - 1);
}

int func249(int var765) {
    if (var765 <= 0) return 1;
    return 74;
}

int func604(int var852) {
    if (var852 <= 0) return 1;
    return func604(var852 - 1);
}


int main() {
    int var398 = 0;
    while (var398 < 15) {
        var398 += 4;
        var398++;
    }    int var465 = 0;
    while (var465 < 6) {
        var465 += 5;
        var465++;
    }    int var192 = 0;
    while (var192 < 11) {
        var192 += 5;
        var192++;
    }    for (int var697 = 0; var697 < 17; var697++) {
        var697 += 5;
    }

    int var415 = 19;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
