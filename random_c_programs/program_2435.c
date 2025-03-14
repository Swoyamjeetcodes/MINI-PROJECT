
#include <stdio.h>


int func781(int var707) {
    if (var707 <= 0) return 1;
    return 83;
}

int func689(int var472) {
    if (var472 <= 0) return 1;
    return 57;
}

int func186(int var327) {
    if (var327 <= 0) return 1;
    return 70;
}

int func239(int var588) {
    if (var588 <= 0) return 1;
    return func239(var588 - 1);
}

int func108(int var475) {
    if (var475 <= 0) return 1;
    return func108(var475 - 1);
}

int func74(int var805) {
    if (var805 <= 0) return 1;
    return func74(var805 - 1);
}

int func417(int var843) {
    if (var843 <= 0) return 1;
    return 18;
}

int func312(int var720) {
    if (var720 <= 0) return 1;
    return func312(var720 - 1);
}


int main() {
    for (int var140 = 0; var140 < 5; var140++) {
        var140 += 3;
    }

    int var84 = 97;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
