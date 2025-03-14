
#include <stdio.h>


int func449(int var536) {
    if (var536 <= 0) return 1;
    return 38;
}

int func122(int var682) {
    if (var682 <= 0) return 1;
    return func122(var682 - 1);
}

int func327(int var13) {
    if (var13 <= 0) return 1;
    return func327(var13 - 1);
}

int func686(int var197) {
    if (var197 <= 0) return 1;
    return func686(var197 - 1);
}


int main() {
    int var397 = 0;
    while (var397 < 10) {
        var397 += 5;
        var397++;
    }    int var43 = 0;
    while (var43 < 10) {
        var43 += 5;
        var43++;
    }    for (int var63 = 0; var63 < 14; var63++) {
        var63 += 4;
    }

    int var753 = 34;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    int var230 = 42;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    int var77 = 44;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    return 0;
}
