
#include <stdio.h>


int func728(int var49) {
    if (var49 <= 0) return 1;
    return 29;
}

int func958(int var571) {
    if (var571 <= 0) return 1;
    return func958(var571 - 1);
}

int func120(int var815) {
    if (var815 <= 0) return 1;
    return func120(var815 - 1);
}


int main() {
    int var816 = 0;
    while (var816 < 13) {
        var816 += 2;
        var816++;
    }    int var1000 = 0;
    while (var1000 < 5) {
        var1000 += 4;
        var1000++;
    }

    int var344 = 10;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    return 0;
}
