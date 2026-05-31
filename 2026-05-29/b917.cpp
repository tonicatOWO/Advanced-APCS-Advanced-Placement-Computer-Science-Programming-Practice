#include <stdio.h>

int main() {
  int n, a[20], cnt = 0;

  while (scanf("%d", &n) != EOF) {
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);

    long long ans = 0;
    for (int i = 0; i < n; i++) {
      long long prod = 1;
      for (int j = i; j < n; j++) {
        prod *= a[j];
        if (prod > ans)
          ans = prod;
      }
    }

    printf("Case #%d: The maximum product is %lld.\n\n", ++cnt, ans);
  }
  return 0;
}
