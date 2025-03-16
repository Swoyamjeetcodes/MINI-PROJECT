
#include <stdio.h>


int func14(int var487) {
    if (var487 <= 0) return 1;
    return 90;
}

int func587(int var239) {
    if (var239 <= 0) return 1;
    return func587(var239 - 1);
}

int func163(int var794) {
    if (var794 <= 0) return 1;
    return func163(var794 - 1);
}


int main() {
    for (int var216 = 0; var216 < 16; var216++) {
        var216 += 4;
    }    int var30 = 0;
    while (var30 < 10) {
        var30 += 2;
        var30++;
    }

    int var920 = 45;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var660 = 74;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var477 = 4;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}
