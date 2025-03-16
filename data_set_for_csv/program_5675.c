
#include <stdio.h>


int func896(int var308) {
    if (var308 <= 0) return 1;
    return 37;
}

int func41(int var349) {
    if (var349 <= 0) return 1;
    return func41(var349 - 1);
}

int func226(int var483) {
    if (var483 <= 0) return 1;
    return func226(var483 - 1);
}


int main() {
    for (int var558 = 0; var558 < 14; var558++) {
        var558 += 1;
    }    for (int var375 = 0; var375 < 11; var375++) {
        var375 += 2;
    }    int var569 = 0;
    while (var569 < 9) {
        var569 += 1;
        var569++;
    }

    int var562 = 60;
    if (var562 % 2 == 0) {
        printf("var562 is even\n");
    } else {
        printf("var562 is odd\n");
    }

    int var821 = 65;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
