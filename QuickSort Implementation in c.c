#include<stdio.h>
#include<stdlib.h>
//bug bug and more bug it's full of bug 
//you have to fix it whenever you got a chance

void Swap(int* x,int* y){
	int tmp=*y;
	*y=*x;
	*x=tmp;
}
int Partition(int A[], int start, int end){
	int Pivot=A[end];
	int j=start;
	int i=start;
	for(i;i<end;i++)
	{
		if(A[i]<Pivot){
			Swap(&A[i],&A[j]);
			j++;
		}
	}
	Swap(&A[j],&A[end]);
	
	
	return (j);
}

void QuickSort(int *A, int start,int end){
	if(start<end){
		int j=Partition(A,start, end);
		QuickSort(A,start,(j-1));
		QuickSort(A,j,end);
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	int *x=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(x+i));
	}
	QuickSort(x,0,(n-1));
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
	return 0;
}


