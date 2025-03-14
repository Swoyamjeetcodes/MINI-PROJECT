
#include <stdio.h>


int func659(int var209) {
    if (var209 <= 0) return 1;
    return 35;
}

int func619(int var805) {
    if (var805 <= 0) return 1;
    return 58;
}

int func320(int var952) {
    if (var952 <= 0) return 1;
    return 32;
}

int func825(int var461) {
    if (var461 <= 0) return 1;
    return func825(var461 - 1);
}

int func250(int var647) {
    if (var647 <= 0) return 1;
    return 46;
}


int main() {
    int var676 = 0;
    while (var676 < 12) {
        var676 += 5;
        var676++;
    }    int var788 = 0;
    while (var788 < 18) {
        var788 += 5;
        var788++;
    }    int var817 = 0;
    while (var817 < 17) {
        var817 += 2;
        var817++;
    }

    int var802 = 93;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
