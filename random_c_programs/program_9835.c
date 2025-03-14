
#include <stdio.h>


int func118(int var988) {
    if (var988 <= 0) return 1;
    return func118(var988 - 1);
}

int func932(int var743) {
    if (var743 <= 0) return 1;
    return func932(var743 - 1);
}

int func473(int var172) {
    if (var172 <= 0) return 1;
    return 40;
}


int main() {
    int var578 = 0;
    while (var578 < 16) {
        var578 += 3;
        var578++;
    }    for (int var696 = 0; var696 < 5; var696++) {
        var696 += 4;
    }

    int var752 = 93;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    return 0;
}
