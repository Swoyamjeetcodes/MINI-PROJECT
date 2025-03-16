
#include <stdio.h>


int func309(int var272) {
    if (var272 <= 0) return 1;
    return func309(var272 - 1);
}

int func412(int var107) {
    if (var107 <= 0) return 1;
    return 100;
}

int func787(int var441) {
    if (var441 <= 0) return 1;
    return func787(var441 - 1);
}

int func493(int var443) {
    if (var443 <= 0) return 1;
    return func493(var443 - 1);
}


int main() {
    for (int var538 = 0; var538 < 17; var538++) {
        var538 += 1;
    }    int var997 = 0;
    while (var997 < 10) {
        var997 += 5;
        var997++;
    }    int var639 = 0;
    while (var639 < 11) {
        var639 += 2;
        var639++;
    }

    int var679 = 68;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    return 0;
}
