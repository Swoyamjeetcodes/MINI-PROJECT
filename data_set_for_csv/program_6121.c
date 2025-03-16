
#include <stdio.h>


int func169(int var773) {
    if (var773 <= 0) return 1;
    return 55;
}

int func821(int var737) {
    if (var737 <= 0) return 1;
    return func821(var737 - 1);
}


int main() {
    int var36 = 0;
    while (var36 < 10) {
        var36 += 1;
        var36++;
    }    for (int var557 = 0; var557 < 14; var557++) {
        var557 += 3;
    }    for (int var582 = 0; var582 < 18; var582++) {
        var582 += 2;
    }

    int var470 = 89;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    int var479 = 88;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    return 0;
}
