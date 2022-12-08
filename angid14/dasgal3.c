#include<stdio.h>
bool isThereSubsetSum(int arr[], int n, int sum) {

  bool dp[n + 1][sum + 1];
  for (int i = 0; i <= n; i++)
    dp[i][0] = true;

  for (int i = 1; i <= sum; i++)
    dp[0][i] = false;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= sum; j++) {
      if (j < arr[i - 1])
        dp[i][j] = dp[i - 1][j];
      if (j >= arr[i - 1])
        dp[i][j] = dp[i - 1][j] ||
        dp[i - 1][j - arr[i - 1]];
    }
  }
  return dp[n][sum];
}
int main() {
    int a[100],n,i,j,l,result,k,sum;
    scanf("%d", &n);
	for(i=0;i<n;i++)
        scanf("%d", a+i);

    scanf("%d", k);
    /*for(l=1,i=0;i<n;i++) {
        sum=0;
        for(j=0;j<l;j++) {
            sum=sum+a[j];
        }
        if(sum==k) {
            result==1;
        }
        else result=0;
    l++;
    }*/
    if(isThereSubs==1)
        printf("k ded olonlog oldono");
    else printf("k ded olonlog oldohgui");
}

