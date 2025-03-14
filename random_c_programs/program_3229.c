
#include <stdio.h>


int func934(int var25) {
    if (var25 <= 0) return 1;
    return func934(var25 - 1);
}

int func451(int var845) {
    if (var845 <= 0) return 1;
    return func451(var845 - 1);
}


int main() {
    for (int var496 = 0; var496 < 14; var496++) {
        var496 += 2;
    }    int var993 = 0;
    while (var993 < 20) {
        var993 += 1;
        var993++;
    }

    int var899 = 53;
    if (var899 % 2 == 0) {
        printf("var899 is even\n");
    } else {
        printf("var899 is odd\n");
    }

    int var966 = 70;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    return 0;
}
