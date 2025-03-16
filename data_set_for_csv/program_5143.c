
#include <stdio.h>


int func762(int var663) {
    if (var663 <= 0) return 1;
    return func762(var663 - 1);
}

int func557(int var148) {
    if (var148 <= 0) return 1;
    return 51;
}


int main() {
    for (int var56 = 0; var56 < 20; var56++) {
        var56 += 3;
    }

    int var633 = 37;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    int var717 = 79;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    int var783 = 57;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    return 0;
}
