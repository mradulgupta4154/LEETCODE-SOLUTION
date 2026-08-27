#include <string.h>

char* reverseByType(char* s) {
    int low = 0, high = strlen(s) - 1;

    while (low < high) {
        if (s[low] >= 'a' && s[low] <= 'z' && s[high] >= 'a' && s[high] <= 'z') {
            char t = s[low];
            s[low] = s[high];
            s[high] = t;
            low++;
            high--;
        } else if (s[low] < 'a' || s[low] > 'z') {
            low++;
        } else {
            high--;
        }
    }

    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if ((s[i] < 'a' || s[i] > 'z') && (s[j] < 'a' || s[j] > 'z')) {
            char t = s[i];
            s[i] = s[j];
            s[j] = t;
            i++;
            j--;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            i++;
        } else {
            j--;
        }
    }

    return s;
}