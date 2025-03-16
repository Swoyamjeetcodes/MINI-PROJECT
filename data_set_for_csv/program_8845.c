
#include <stdio.h>


int func732(int var326) {
    if (var326 <= 0) return 1;
    return func732(var326 - 1);
}

int func363(int var198) {
    if (var198 <= 0) return 1;
    return 18;
}

int func315(int var62) {
    if (var62 <= 0) return 1;
    return func315(var62 - 1);
}

int func697(int var554) {
    if (var554 <= 0) return 1;
    return func697(var554 - 1);
}

int func432(int var249) {
    if (var249 <= 0) return 1;
    return func432(var249 - 1);
}

int func139(int var459) {
    if (var459 <= 0) return 1;
    return 52;
}

int func653(int var499) {
    if (var499 <= 0) return 1;
    return func653(var499 - 1);
}


int main() {
    for (int var462 = 0; var462 < 15; var462++) {
        var462 += 2;
    }    for (int var797 = 0; var797 < 16; var797++) {
        var797 += 1;
    }

    int var868 = 50;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    int var752 = 87;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var500 = 13;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    int var260 = 49;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    return 0;
}
