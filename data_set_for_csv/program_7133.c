
#include <stdio.h>


int func877(int var797) {
    if (var797 <= 0) return 1;
    return 90;
}

int func641(int var683) {
    if (var683 <= 0) return 1;
    return 79;
}

int func891(int var129) {
    if (var129 <= 0) return 1;
    return 74;
}

int func324(int var611) {
    if (var611 <= 0) return 1;
    return func324(var611 - 1);
}


int main() {
    int var366 = 0;
    while (var366 < 7) {
        var366 += 1;
        var366++;
    }    int var263 = 0;
    while (var263 < 12) {
        var263 += 3;
        var263++;
    }

    int var281 = 13;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    return 0;
}
