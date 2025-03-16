
#include <stdio.h>


int func384(int var852) {
    if (var852 <= 0) return 1;
    return 89;
}

int func880(int var240) {
    if (var240 <= 0) return 1;
    return 43;
}

int func950(int var326) {
    if (var326 <= 0) return 1;
    return func950(var326 - 1);
}

int func819(int var977) {
    if (var977 <= 0) return 1;
    return func819(var977 - 1);
}


int main() {
    for (int var895 = 0; var895 < 14; var895++) {
        var895 += 2;
    }    for (int var789 = 0; var789 < 20; var789++) {
        var789 += 4;
    }    int var396 = 0;
    while (var396 < 12) {
        var396 += 2;
        var396++;
    }

    int var558 = 65;
    if (var558 % 2 == 0) {
        printf("var558 is even\n");
    } else {
        printf("var558 is odd\n");
    }

    int var633 = 24;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    int var627 = 52;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    return 0;
}
