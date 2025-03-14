
#include <stdio.h>


int func219(int var902) {
    if (var902 <= 0) return 1;
    return 72;
}

int func501(int var340) {
    if (var340 <= 0) return 1;
    return 49;
}

int func242(int var271) {
    if (var271 <= 0) return 1;
    return 90;
}

int func365(int var707) {
    if (var707 <= 0) return 1;
    return func365(var707 - 1);
}

int func352(int var520) {
    if (var520 <= 0) return 1;
    return 44;
}


int main() {
    for (int var185 = 0; var185 < 10; var185++) {
        var185 += 4;
    }

    int var824 = 51;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var347 = 58;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var939 = 13;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    return 0;
}
