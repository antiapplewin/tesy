#include <stdio.h>
void tdice();
void Happy();
void Paper();
void Ladder();

int main(void) {
  Ladder();
  return 0;
}

void tdice() {
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);
  int res1 = n==m, res2 = m==l, res3 = n == l;
  int resum = res1+res2+res3;
  if (resum==3) printf("%d", 10000+n*1000);
  else if (resum==1) {
    if (res1 == 1) printf("%d", 1000+n*100);
    else if (res2==1) printf("%d", 1000+m*100);
    else printf("%d", 1000+100*l);
  }
  else {
    int big;
    if (big<n) big=n;
    if (big<m) big=m;
    if (big<l) big=l;
    printf("%d", 100*big);
  }
}

void Happy() {
  int n, v[100] = {0}, low_num = 1000, high_num = 0;
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  for (int i = 0; i<n; i++) {
    if (low_num>v[i]) low_num = v[i];
    if (high_num<v[i]) high_num = v[i];
  }
  
  printf("%d", high_num-low_num);
}

void Paper() {
  int n, v[1001][1001] = {0};
  scanf("%d", &n);
  for (int i = 1; i<=n; i++) {
    int x, y, h, w;
    scanf("%d %d %d %d", &x, &y, &h, &w);
    for (int q = x;q<x+h; q++) {
      for (int u = y; u<y+w; u++) {
        v[q][u] = i;
      }
    }
  }

  for (int k = 0; k<n;k++) {
    int sum = 0;
    for (int i = 0; i<1001; i++) {
      for (int j = 0; j<1001;j++) {
        if (k+1==v[i][j]) sum++;
      }
    }
    printf("%d\n", sum);
  }
  
}

void Ladder() {
  int n, v[100][100] = {0};
}
