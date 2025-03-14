
#include <stdio.h>


int func463(int var524) {
    if (var524 <= 0) return 1;
    return 55;
}

int func415(int var882) {
    if (var882 <= 0) return 1;
    return func415(var882 - 1);
}

int func948(int var720) {
    if (var720 <= 0) return 1;
    return func948(var720 - 1);
}


int main() {
    for (int var252 = 0; var252 < 17; var252++) {
        var252 += 3;
    }    for (int var140 = 0; var140 < 16; var140++) {
        var140 += 2;
    }    int var616 = 0;
    while (var616 < 9) {
        var616 += 2;
        var616++;
    }

    int var172 = 86;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    return 0;
}
