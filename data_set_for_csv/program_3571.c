
#include <stdio.h>


int func176(int var136) {
    if (var136 <= 0) return 1;
    return 57;
}

int func934(int var57) {
    if (var57 <= 0) return 1;
    return func934(var57 - 1);
}

int func815(int var10) {
    if (var10 <= 0) return 1;
    return func815(var10 - 1);
}

int func585(int var321) {
    if (var321 <= 0) return 1;
    return 15;
}

int func720(int var781) {
    if (var781 <= 0) return 1;
    return func720(var781 - 1);
}


int main() {
    int var993 = 0;
    while (var993 < 16) {
        var993 += 4;
        var993++;
    }

    int var316 = 99;
    if (var316 % 2 == 0) {
        printf("var316 is even\n");
    } else {
        printf("var316 is odd\n");
    }

    int var334 = 44;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    int var517 = 12;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
