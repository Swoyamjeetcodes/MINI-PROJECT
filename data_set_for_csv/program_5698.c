
#include <stdio.h>


int func439(int var815) {
    if (var815 <= 0) return 1;
    return func439(var815 - 1);
}

int func85(int var626) {
    if (var626 <= 0) return 1;
    return 8;
}

int func842(int var875) {
    if (var875 <= 0) return 1;
    return 81;
}


int main() {
    for (int var921 = 0; var921 < 9; var921++) {
        var921 += 3;
    }    for (int var554 = 0; var554 < 7; var554++) {
        var554 += 3;
    }

    int var289 = 63;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    int var389 = 28;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    int var595 = 94;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    return 0;
}
