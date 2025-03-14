
#include <stdio.h>


int func319(int var927) {
    if (var927 <= 0) return 1;
    return func319(var927 - 1);
}

int func121(int var532) {
    if (var532 <= 0) return 1;
    return func121(var532 - 1);
}


int main() {
    for (int var142 = 0; var142 < 16; var142++) {
        var142 += 4;
    }    int var846 = 0;
    while (var846 < 12) {
        var846 += 5;
        var846++;
    }    for (int var734 = 0; var734 < 7; var734++) {
        var734 += 4;
    }

    int var318 = 79;
    if (var318 % 2 == 0) {
        printf("var318 is even\n");
    } else {
        printf("var318 is odd\n");
    }

    int var926 = 19;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    int var616 = 82;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    int var149 = 44;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    return 0;
}
