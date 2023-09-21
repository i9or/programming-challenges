#include <stdio.h>

int cycle(int m) {
  int i = 1;

  while(m > 1) {
    if (m % 2 == 0) {
      m = m / 2;
    } else {
      m = 3 * m + 1;
    }
    ++i;
  }

  return i;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("./in.txt", "rt", stdin);
#endif

  int i, j, n, n_max, k, val, tmp;
  int i_original, j_original;

  while (scanf("%d %d\n", &i_original, &j_original) == 2) {
    if (i_original > j_original) {
      i = j_original;
      j = i_original;
    } else {
      i = i_original;
      j = j_original;
    }

    n_max = 0;

    for (k = i; k <= j; ++k) {
      n = cycle(k);

      if (n > n_max) {
        n_max = n;
      }
    }

    printf("%d %d %d\n", i_original, j_original, n_max);
  }

  return 0;
}
