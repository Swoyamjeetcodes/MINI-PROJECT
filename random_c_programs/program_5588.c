
#include <stdio.h>


int func445(int var183) {
    if (var183 <= 0) return 1;
    return func445(var183 - 1);
}

int func871(int var767) {
    if (var767 <= 0) return 1;
    return func871(var767 - 1);
}

int func35(int var302) {
    if (var302 <= 0) return 1;
    return func35(var302 - 1);
}


int main() {
    for (int var977 = 0; var977 < 6; var977++) {
        var977 += 5;
    }    int var744 = 0;
    while (var744 < 9) {
        var744 += 2;
        var744++;
    }

    int var505 = 12;
    if (var505 % 2 == 0) {
        printf("var505 is even\n");
    } else {
        printf("var505 is odd\n");
    }

    int var599 = 13;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    return 0;
}
