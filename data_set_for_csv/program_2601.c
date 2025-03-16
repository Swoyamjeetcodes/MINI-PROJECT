
#include <stdio.h>


int func6(int var427) {
    if (var427 <= 0) return 1;
    return func6(var427 - 1);
}

int func142(int var583) {
    if (var583 <= 0) return 1;
    return 36;
}

int func325(int var478) {
    if (var478 <= 0) return 1;
    return func325(var478 - 1);
}

int func668(int var949) {
    if (var949 <= 0) return 1;
    return 19;
}


int main() {
    for (int var647 = 0; var647 < 20; var647++) {
        var647 += 3;
    }    for (int var666 = 0; var666 < 10; var666++) {
        var666 += 2;
    }

    int var329 = 35;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var744 = 73;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    return 0;
}
