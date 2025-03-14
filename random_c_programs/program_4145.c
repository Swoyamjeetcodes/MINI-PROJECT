
#include <stdio.h>


int func740(int var457) {
    if (var457 <= 0) return 1;
    return 16;
}

int func112(int var875) {
    if (var875 <= 0) return 1;
    return func112(var875 - 1);
}

int func485(int var352) {
    if (var352 <= 0) return 1;
    return 25;
}

int func207(int var107) {
    if (var107 <= 0) return 1;
    return 91;
}

int func774(int var191) {
    if (var191 <= 0) return 1;
    return 28;
}


int main() {
    int var142 = 0;
    while (var142 < 11) {
        var142 += 4;
        var142++;
    }    for (int var623 = 0; var623 < 20; var623++) {
        var623 += 3;
    }    int var797 = 0;
    while (var797 < 11) {
        var797 += 3;
        var797++;
    }

    int var258 = 80;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    int var869 = 16;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    return 0;
}
