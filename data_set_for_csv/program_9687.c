
#include <stdio.h>


int func726(int var53) {
    if (var53 <= 0) return 1;
    return func726(var53 - 1);
}

int func849(int var806) {
    if (var806 <= 0) return 1;
    return 26;
}

int func649(int var643) {
    if (var643 <= 0) return 1;
    return 62;
}

int func404(int var516) {
    if (var516 <= 0) return 1;
    return func404(var516 - 1);
}


int main() {
    for (int var705 = 0; var705 < 15; var705++) {
        var705 += 5;
    }

    int var315 = 68;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
