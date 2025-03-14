
#include <stdio.h>


int func666(int var258) {
    if (var258 <= 0) return 1;
    return 7;
}

int func990(int var803) {
    if (var803 <= 0) return 1;
    return func990(var803 - 1);
}

int func42(int var870) {
    if (var870 <= 0) return 1;
    return 54;
}


int main() {
    int var953 = 0;
    while (var953 < 17) {
        var953 += 3;
        var953++;
    }    int var224 = 0;
    while (var224 < 17) {
        var224 += 5;
        var224++;
    }    for (int var595 = 0; var595 < 10; var595++) {
        var595 += 5;
    }

    int var665 = 73;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
