
#include <stdio.h>


int func945(int var463) {
    if (var463 <= 0) return 1;
    return 12;
}

int func897(int var640) {
    if (var640 <= 0) return 1;
    return 36;
}

int func805(int var970) {
    if (var970 <= 0) return 1;
    return func805(var970 - 1);
}

int func634(int var396) {
    if (var396 <= 0) return 1;
    return func634(var396 - 1);
}

int func329(int var310) {
    if (var310 <= 0) return 1;
    return 95;
}


int main() {
    int var347 = 0;
    while (var347 < 9) {
        var347 += 5;
        var347++;
    }

    int var977 = 8;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var445 = 23;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    int var39 = 70;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
