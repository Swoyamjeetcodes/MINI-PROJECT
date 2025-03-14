
#include <stdio.h>


int func183(int var500) {
    if (var500 <= 0) return 1;
    return 49;
}

int func93(int var956) {
    if (var956 <= 0) return 1;
    return func93(var956 - 1);
}


int main() {
    for (int var142 = 0; var142 < 11; var142++) {
        var142 += 3;
    }

    int var404 = 57;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    int var838 = 5;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    int var683 = 47;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
