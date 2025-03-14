
#include <stdio.h>


int func631(int var159) {
    if (var159 <= 0) return 1;
    return func631(var159 - 1);
}

int func417(int var601) {
    if (var601 <= 0) return 1;
    return func417(var601 - 1);
}

int func10(int var672) {
    if (var672 <= 0) return 1;
    return 99;
}

int func390(int var758) {
    if (var758 <= 0) return 1;
    return 34;
}

int func848(int var443) {
    if (var443 <= 0) return 1;
    return func848(var443 - 1);
}

int func551(int var547) {
    if (var547 <= 0) return 1;
    return 51;
}

int func879(int var173) {
    if (var173 <= 0) return 1;
    return func879(var173 - 1);
}

int func681(int var137) {
    if (var137 <= 0) return 1;
    return 15;
}

int func147(int var882) {
    if (var882 <= 0) return 1;
    return 5;
}

int func194(int var281) {
    if (var281 <= 0) return 1;
    return func194(var281 - 1);
}


int main() {
    int var84 = 0;
    while (var84 < 12) {
        var84 += 4;
        var84++;
    }

    int var549 = 64;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    int var289 = 100;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    return 0;
}
