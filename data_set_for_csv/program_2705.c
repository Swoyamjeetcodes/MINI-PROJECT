
#include <stdio.h>


int func510(int var520) {
    if (var520 <= 0) return 1;
    return func510(var520 - 1);
}

int func935(int var749) {
    if (var749 <= 0) return 1;
    return func935(var749 - 1);
}

int func33(int var430) {
    if (var430 <= 0) return 1;
    return func33(var430 - 1);
}

int func381(int var281) {
    if (var281 <= 0) return 1;
    return func381(var281 - 1);
}


int main() {
    int var863 = 0;
    while (var863 < 13) {
        var863 += 5;
        var863++;
    }    int var219 = 0;
    while (var219 < 14) {
        var219 += 4;
        var219++;
    }

    int var862 = 7;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
