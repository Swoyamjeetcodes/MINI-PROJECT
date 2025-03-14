
#include <stdio.h>


int func938(int var153) {
    if (var153 <= 0) return 1;
    return func938(var153 - 1);
}

int func565(int var257) {
    if (var257 <= 0) return 1;
    return 57;
}

int func869(int var984) {
    if (var984 <= 0) return 1;
    return func869(var984 - 1);
}


int main() {
    int var315 = 0;
    while (var315 < 19) {
        var315 += 2;
        var315++;
    }

    int var325 = 6;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    return 0;
}
