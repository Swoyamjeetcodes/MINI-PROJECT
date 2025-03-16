
#include <stdio.h>


int func234(int var234) {
    if (var234 <= 0) return 1;
    return func234(var234 - 1);
}

int func763(int var889) {
    if (var889 <= 0) return 1;
    return func763(var889 - 1);
}

int func216(int var912) {
    if (var912 <= 0) return 1;
    return 40;
}

int func933(int var752) {
    if (var752 <= 0) return 1;
    return func933(var752 - 1);
}


int main() {
    for (int var985 = 0; var985 < 12; var985++) {
        var985 += 1;
    }    int var164 = 0;
    while (var164 < 8) {
        var164 += 1;
        var164++;
    }    for (int var110 = 0; var110 < 18; var110++) {
        var110 += 3;
    }

    int var739 = 1;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    return 0;
}
