
#include <stdio.h>


int func378(int var619) {
    if (var619 <= 0) return 1;
    return func378(var619 - 1);
}

int func600(int var77) {
    if (var77 <= 0) return 1;
    return 25;
}

int func66(int var162) {
    if (var162 <= 0) return 1;
    return 2;
}

int func836(int var879) {
    if (var879 <= 0) return 1;
    return 66;
}


int main() {
    for (int var109 = 0; var109 < 8; var109++) {
        var109 += 5;
    }

    int var540 = 26;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
