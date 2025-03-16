
#include <stdio.h>


int func615(int var452) {
    if (var452 <= 0) return 1;
    return func615(var452 - 1);
}

int func630(int var791) {
    if (var791 <= 0) return 1;
    return func630(var791 - 1);
}

int func776(int var313) {
    if (var313 <= 0) return 1;
    return 68;
}

int func15(int var312) {
    if (var312 <= 0) return 1;
    return func15(var312 - 1);
}

int func667(int var808) {
    if (var808 <= 0) return 1;
    return func667(var808 - 1);
}


int main() {
    for (int var443 = 0; var443 < 13; var443++) {
        var443 += 1;
    }    int var957 = 0;
    while (var957 < 7) {
        var957 += 2;
        var957++;
    }

    int var863 = 71;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var414 = 86;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
