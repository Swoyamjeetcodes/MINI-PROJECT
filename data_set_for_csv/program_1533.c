
#include <stdio.h>


int func613(int var838) {
    if (var838 <= 0) return 1;
    return func613(var838 - 1);
}

int func47(int var529) {
    if (var529 <= 0) return 1;
    return 19;
}

int func339(int var436) {
    if (var436 <= 0) return 1;
    return func339(var436 - 1);
}

int func31(int var253) {
    if (var253 <= 0) return 1;
    return 31;
}

int func713(int var423) {
    if (var423 <= 0) return 1;
    return 23;
}


int main() {
    int var39 = 0;
    while (var39 < 13) {
        var39 += 5;
        var39++;
    }

    int var47 = 43;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    int var815 = 100;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    int var225 = 97;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    int var646 = 7;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
