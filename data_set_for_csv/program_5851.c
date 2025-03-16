
#include <stdio.h>


int func798(int var655) {
    if (var655 <= 0) return 1;
    return 36;
}

int func983(int var390) {
    if (var390 <= 0) return 1;
    return func983(var390 - 1);
}

int func510(int var595) {
    if (var595 <= 0) return 1;
    return 2;
}


int main() {
    int var583 = 0;
    while (var583 < 5) {
        var583 += 5;
        var583++;
    }    for (int var735 = 0; var735 < 19; var735++) {
        var735 += 2;
    }

    int var225 = 81;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
