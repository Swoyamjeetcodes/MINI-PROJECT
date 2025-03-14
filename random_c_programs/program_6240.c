
#include <stdio.h>


int func43(int var606) {
    if (var606 <= 0) return 1;
    return func43(var606 - 1);
}

int func372(int var448) {
    if (var448 <= 0) return 1;
    return func372(var448 - 1);
}

int func502(int var638) {
    if (var638 <= 0) return 1;
    return 61;
}


int main() {
    int var570 = 0;
    while (var570 < 16) {
        var570 += 1;
        var570++;
    }

    int var174 = 12;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    int var574 = 74;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
