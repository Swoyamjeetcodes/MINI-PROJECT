
#include <stdio.h>


int func621(int var86) {
    if (var86 <= 0) return 1;
    return func621(var86 - 1);
}

int func874(int var107) {
    if (var107 <= 0) return 1;
    return func874(var107 - 1);
}

int func439(int var193) {
    if (var193 <= 0) return 1;
    return func439(var193 - 1);
}

int func545(int var601) {
    if (var601 <= 0) return 1;
    return func545(var601 - 1);
}


int main() {
    int var721 = 0;
    while (var721 < 7) {
        var721 += 4;
        var721++;
    }

    int var752 = 17;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var741 = 79;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
