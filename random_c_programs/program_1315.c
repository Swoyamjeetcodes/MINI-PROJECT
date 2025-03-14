
#include <stdio.h>


int func813(int var851) {
    if (var851 <= 0) return 1;
    return func813(var851 - 1);
}

int func68(int var984) {
    if (var984 <= 0) return 1;
    return func68(var984 - 1);
}

int func277(int var677) {
    if (var677 <= 0) return 1;
    return func277(var677 - 1);
}

int func632(int var642) {
    if (var642 <= 0) return 1;
    return 70;
}


int main() {
    for (int var597 = 0; var597 < 18; var597++) {
        var597 += 1;
    }    for (int var890 = 0; var890 < 17; var890++) {
        var890 += 3;
    }

    int var4 = 96;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    int var675 = 97;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    return 0;
}
