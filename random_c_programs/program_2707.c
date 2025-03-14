
#include <stdio.h>


int func752(int var908) {
    if (var908 <= 0) return 1;
    return 14;
}

int func743(int var702) {
    if (var702 <= 0) return 1;
    return func743(var702 - 1);
}

int func689(int var145) {
    if (var145 <= 0) return 1;
    return func689(var145 - 1);
}

int func379(int var647) {
    if (var647 <= 0) return 1;
    return 57;
}


int main() {
    for (int var488 = 0; var488 < 6; var488++) {
        var488 += 1;
    }

    int var322 = 84;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    return 0;
}
