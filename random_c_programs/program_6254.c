
#include <stdio.h>


int func869(int var747) {
    if (var747 <= 0) return 1;
    return 13;
}

int func662(int var220) {
    if (var220 <= 0) return 1;
    return func662(var220 - 1);
}

int func85(int var246) {
    if (var246 <= 0) return 1;
    return func85(var246 - 1);
}

int func749(int var642) {
    if (var642 <= 0) return 1;
    return 36;
}

int func948(int var626) {
    if (var626 <= 0) return 1;
    return func948(var626 - 1);
}


int main() {
    for (int var307 = 0; var307 < 17; var307++) {
        var307 += 3;
    }    for (int var961 = 0; var961 < 18; var961++) {
        var961 += 3;
    }

    int var469 = 61;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    return 0;
}
