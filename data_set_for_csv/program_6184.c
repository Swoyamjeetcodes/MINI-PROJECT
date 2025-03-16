
#include <stdio.h>


int func916(int var857) {
    if (var857 <= 0) return 1;
    return 29;
}

int func887(int var351) {
    if (var351 <= 0) return 1;
    return func887(var351 - 1);
}

int func220(int var141) {
    if (var141 <= 0) return 1;
    return 61;
}

int func163(int var702) {
    if (var702 <= 0) return 1;
    return 63;
}

int func874(int var146) {
    if (var146 <= 0) return 1;
    return func874(var146 - 1);
}


int main() {
    for (int var910 = 0; var910 < 19; var910++) {
        var910 += 3;
    }

    int var926 = 0;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    return 0;
}
