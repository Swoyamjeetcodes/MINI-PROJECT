
#include <stdio.h>


int func708(int var188) {
    if (var188 <= 0) return 1;
    return func708(var188 - 1);
}

int func888(int var37) {
    if (var37 <= 0) return 1;
    return func888(var37 - 1);
}

int func385(int var580) {
    if (var580 <= 0) return 1;
    return 16;
}

int func43(int var555) {
    if (var555 <= 0) return 1;
    return func43(var555 - 1);
}


int main() {
    for (int var155 = 0; var155 < 6; var155++) {
        var155 += 3;
    }    for (int var111 = 0; var111 < 9; var111++) {
        var111 += 1;
    }

    int var354 = 55;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
