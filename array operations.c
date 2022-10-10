#include <stdio.h>
void main()
{
    int n,c;
    printf("enter the no of element :");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("enter the element:");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("menu \n 1.insertion \n 2.delete \n 3.display \n enter your choice:");
    scanf("%d",&c);
    if(c==1){
        int pos;
        scanf("%d",&pos);
        int ele;
        scanf("%d",&ele);
        if(pos > n)
            printf("Invalid Input");
        else
        {
            for (i = n - 1; i >= pos - 1; i--){
                arr[i+1] = arr[i];
            }
            arr[pos-1] = ele;

            printf("Array after insertion is:\n");

            for (i = 0; i <= n; i++){
                printf (" arr[%d] = ", i);
                printf("%d\n", arr[i]);
            }
        }
    }
    else if(c==2){
        printf( " Define the position of the array element where you want to delete: \n "); 
        int pos; 
        scanf (" %d", &pos);   
        if (pos >= n+1)  
        {  
            printf (" \n Deletion is not possible in the array.");  
        }  
        else  
        {   
            for (i = pos - 1; i < n -1; i++)  
            {  
                arr[i] = arr[i+1];   
            }  
            
            printf (" \n The resultant array is: \n");  
            
            for (i = 0; i< n - 1; i++)  
            {  
                printf (" arr[%d] = ", i);  
                printf (" %d \n", arr[i]);  
            }  
        }  
    }
    else{
        for (i = 0; i< n - 1; i++)  
            {  
                printf (" arr[%d] = ", i);  
                printf (" %d \n", arr[i]);  
            }
    }
}
