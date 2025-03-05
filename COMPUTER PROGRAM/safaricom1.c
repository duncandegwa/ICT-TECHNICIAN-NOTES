#include<stdio.h>
int main()
{
   
   int length;
   int width;
   int area;
   int perimeter;
   
   printf("ENTER LENGTH \n");
   scanf("%d", &length);
   printf("ENTER WIDTH \n");
   scanf("%d", &width);
	  area=length*width;
	  perimeter=2*length + 2*width;
   printf("THE AREA IS %d \n",area);
   printf("THE PERIMETER IS %d \n",perimeter);
   return 0;  
}   