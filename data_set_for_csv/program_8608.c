
#include <stdio.h>


int func924(int var991) {
    if (var991 <= 0) return 1;
    return func924(var991 - 1);
}


int main() {
    for (int var778 = 0; var778 < 20; var778++) {
        var778 += 3;
    }

    int var496 = 19;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    return 0;
}
