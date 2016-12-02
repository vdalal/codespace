int main()
{
 int i = 0;
 int j = 0;
 int k = 0;

 for (i = 2; i <= 100; i++)
 {
  for (j = 2; j <= i/2; j++)
  {
   if (i%j == 0)
   {
    k++; 
    break;
   }
  }
  
  if (k == 0)
   printf("%d\n",i);

  k = 0;
 } 
 
 return 0;
}
 
