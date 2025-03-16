
#include <stdio.h>


int func880(int var821) {
    if (var821 <= 0) return 1;
    return func880(var821 - 1);
}

int func40(int var646) {
    if (var646 <= 0) return 1;
    return func40(var646 - 1);
}

int func410(int var763) {
    if (var763 <= 0) return 1;
    return 89;
}

int func939(int var568) {
    if (var568 <= 0) return 1;
    return func939(var568 - 1);
}

int func659(int var515) {
    if (var515 <= 0) return 1;
    return func659(var515 - 1);
}


int main() {
    for (int var602 = 0; var602 < 12; var602++) {
        var602 += 5;
    }

    int var66 = 75;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    return 0;
}
