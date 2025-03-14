
#include <stdio.h>


int func702(int var583) {
    if (var583 <= 0) return 1;
    return func702(var583 - 1);
}

int func488(int var961) {
    if (var961 <= 0) return 1;
    return 28;
}

int func259(int var438) {
    if (var438 <= 0) return 1;
    return func259(var438 - 1);
}

int func784(int var952) {
    if (var952 <= 0) return 1;
    return func784(var952 - 1);
}

int func769(int var966) {
    if (var966 <= 0) return 1;
    return 70;
}


int main() {
    for (int var632 = 0; var632 < 20; var632++) {
        var632 += 2;
    }    int var659 = 0;
    while (var659 < 16) {
        var659 += 1;
        var659++;
    }    for (int var859 = 0; var859 < 15; var859++) {
        var859 += 2;
    }

    int var586 = 26;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
