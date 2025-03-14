
#include <stdio.h>


int func44(int var403) {
    if (var403 <= 0) return 1;
    return func44(var403 - 1);
}

int func724(int var797) {
    if (var797 <= 0) return 1;
    return 32;
}

int func496(int var710) {
    if (var710 <= 0) return 1;
    return func496(var710 - 1);
}


int main() {
    int var775 = 0;
    while (var775 < 7) {
        var775 += 5;
        var775++;
    }    int var460 = 0;
    while (var460 < 20) {
        var460 += 3;
        var460++;
    }

    int var724 = 29;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    int var295 = 75;
    if (var295 % 2 == 0) {
        printf("var295 is even\n");
    } else {
        printf("var295 is odd\n");
    }

    return 0;
}
