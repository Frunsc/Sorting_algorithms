#include <stdio.h>

int main()
{
    int key,l,s,c;
    int array[50];
    
    

    printf("kucukten buyuge siralanmasini istediginiz sayi miktarini giriniz.\n");
    scanf("%d",&l);
    
    for ( c =0; c< l ; c++)
    {
        printf("%d. sayiyi giriniz;  ",1+c);
        scanf("%d",&array[c]);
        
    }

    for (int i=1 ; i<l ; i++ )
    {
        key= array[i];
        int j= i-1;
        while(array[j] > key && j>=0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    
    for(int a=0 ; a<l; a++)
    {
        printf("%d\t",array[a]);
    }
}