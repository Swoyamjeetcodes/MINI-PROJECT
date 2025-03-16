
#include <stdio.h>


int func835(int var368) {
    if (var368 <= 0) return 1;
    return func835(var368 - 1);
}

int func670(int var427) {
    if (var427 <= 0) return 1;
    return func670(var427 - 1);
}

int func144(int var291) {
    if (var291 <= 0) return 1;
    return 65;
}

int func933(int var704) {
    if (var704 <= 0) return 1;
    return 1;
}


int main() {
    int var845 = 0;
    while (var845 < 16) {
        var845 += 5;
        var845++;
    }

    int var316 = 25;
    if (var316 % 2 == 0) {
        printf("var316 is even\n");
    } else {
        printf("var316 is odd\n");
    }

    return 0;
}
