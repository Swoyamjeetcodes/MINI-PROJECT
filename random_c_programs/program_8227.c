
#include <stdio.h>


int func586(int var842) {
    if (var842 <= 0) return 1;
    return func586(var842 - 1);
}

int func538(int var57) {
    if (var57 <= 0) return 1;
    return 40;
}

int func268(int var236) {
    if (var236 <= 0) return 1;
    return func268(var236 - 1);
}

int func237(int var863) {
    if (var863 <= 0) return 1;
    return func237(var863 - 1);
}


int main() {
    int var742 = 0;
    while (var742 < 5) {
        var742 += 2;
        var742++;
    }

    int var471 = 78;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    return 0;
}
