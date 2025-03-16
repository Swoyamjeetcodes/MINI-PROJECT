
#include <stdio.h>


int func660(int var151) {
    if (var151 <= 0) return 1;
    return func660(var151 - 1);
}

int func459(int var674) {
    if (var674 <= 0) return 1;
    return func459(var674 - 1);
}

int func260(int var274) {
    if (var274 <= 0) return 1;
    return func260(var274 - 1);
}

int func7(int var845) {
    if (var845 <= 0) return 1;
    return func7(var845 - 1);
}

int func513(int var201) {
    if (var201 <= 0) return 1;
    return 80;
}


int main() {
    int var742 = 0;
    while (var742 < 13) {
        var742 += 2;
        var742++;
    }    for (int var53 = 0; var53 < 9; var53++) {
        var53 += 5;
    }    int var567 = 0;
    while (var567 < 13) {
        var567 += 2;
        var567++;
    }

    int var104 = 10;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    int var903 = 53;
    if (var903 % 2 == 0) {
        printf("var903 is even\n");
    } else {
        printf("var903 is odd\n");
    }

    return 0;
}
