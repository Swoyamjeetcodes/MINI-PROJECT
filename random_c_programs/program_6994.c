
#include <stdio.h>


int func711(int var637) {
    if (var637 <= 0) return 1;
    return func711(var637 - 1);
}

int func531(int var518) {
    if (var518 <= 0) return 1;
    return func531(var518 - 1);
}

int func549(int var726) {
    if (var726 <= 0) return 1;
    return func549(var726 - 1);
}

int func472(int var325) {
    if (var325 <= 0) return 1;
    return func472(var325 - 1);
}

int func943(int var750) {
    if (var750 <= 0) return 1;
    return func943(var750 - 1);
}


int main() {
    int var836 = 0;
    while (var836 < 16) {
        var836 += 1;
        var836++;
    }    int var382 = 0;
    while (var382 < 6) {
        var382 += 3;
        var382++;
    }

    int var939 = 32;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    int var981 = 82;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    return 0;
}
