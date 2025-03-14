
#include <stdio.h>


int func973(int var104) {
    if (var104 <= 0) return 1;
    return 43;
}

int func493(int var472) {
    if (var472 <= 0) return 1;
    return 57;
}

int func199(int var107) {
    if (var107 <= 0) return 1;
    return func199(var107 - 1);
}

int func532(int var41) {
    if (var41 <= 0) return 1;
    return func532(var41 - 1);
}


int main() {
    for (int var615 = 0; var615 < 5; var615++) {
        var615 += 1;
    }    int var610 = 0;
    while (var610 < 11) {
        var610 += 4;
        var610++;
    }

    int var299 = 7;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    int var876 = 23;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    int var879 = 63;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var547 = 48;
    if (var547 % 2 == 0) {
        printf("var547 is even\n");
    } else {
        printf("var547 is odd\n");
    }

    return 0;
}
