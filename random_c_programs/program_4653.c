
#include <stdio.h>


int func829(int var991) {
    if (var991 <= 0) return 1;
    return 21;
}

int func536(int var324) {
    if (var324 <= 0) return 1;
    return 26;
}

int func661(int var859) {
    if (var859 <= 0) return 1;
    return func661(var859 - 1);
}


int main() {
    for (int var148 = 0; var148 < 20; var148++) {
        var148 += 5;
    }    for (int var718 = 0; var718 < 8; var718++) {
        var718 += 5;
    }

    int var765 = 100;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    int var268 = 23;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    return 0;
}
