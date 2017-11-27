#include <stdio.h>
#include <string.h>
int main() {
	// your code goes here
	int i,n,j;
    char a[100],t;
    printf("Enter a string : ");
    scanf("%s",a);
    n=strlen(a);
    for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Reverse String is : %s",a);
	return 0;
}
