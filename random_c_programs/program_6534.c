
#include <stdio.h>


int func19(int var215) {
    if (var215 <= 0) return 1;
    return func19(var215 - 1);
}

int func57(int var515) {
    if (var515 <= 0) return 1;
    return func57(var515 - 1);
}

int func805(int var194) {
    if (var194 <= 0) return 1;
    return func805(var194 - 1);
}

int func20(int var649) {
    if (var649 <= 0) return 1;
    return func20(var649 - 1);
}


int main() {
    int var37 = 0;
    while (var37 < 5) {
        var37 += 3;
        var37++;
    }    for (int var173 = 0; var173 < 8; var173++) {
        var173 += 1;
    }    int var794 = 0;
    while (var794 < 11) {
        var794 += 2;
        var794++;
    }

    int var783 = 8;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    int var210 = 50;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    int var750 = 72;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
