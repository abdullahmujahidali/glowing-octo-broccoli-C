/*
int isHeap_iter(int arr[], int n); // iterative Returns 1 if arr[i..n-1] represents a min heap
int isHeap_recursive(int arr[], int i, int n); // recursive Returns 1 if arr[i..n-1] represents a min heap
*/
#include <stdio.h>

int isHeap_iter(int A[], int n);
int isHeap_recursive(int A[], int i, int n);

void main()
{
int A[6] = {12,13,14,15,110,115};

int o1 = isHeap_iter(A,6);
int o2 = isHeap_recursive(A,0,6);

if(o1 == 1 && o2 == 1)
{
printf("iterative say yes \n");
printf("recursive say yes \n");
}
else if(o1 == 0 && o2 == 0)
{
printf("iterative say no \n");
printf("recursive say no \n");
}


}


int isHeap_iter(int A[], int n)
{

for(int i=0; i<=(n-2)/2; i++)
{
if (A[2*i +1] < A[i])
return 0;
  
if (2*i+2 > n && A[2*i+2] < A[i])
return 0;
}

return 1;

}

int isHeap_recursive(int A[], int i, int n)
{

if (i > (n - 2)/2)
return 1;

if (A[i] <= A[2*i + 1] && A[i] <= A[2*i + 2] &&
isHeap_recursive(A, 2*i + 1, n) && isHeap_recursive(A, 2*i + 2, n))
return 1;
  
return 0;

}
