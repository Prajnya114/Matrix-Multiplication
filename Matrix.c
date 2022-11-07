//PROGRAN TO CONTINUE MATRIX MULTIPLICATION

printf("matrix multiplication to be processed \n");
   for(i=0;i<n;i++)
     {
         for(j=0;j<q;j++)
             {
                  for(k=0;k<n;k++)
                       {
                             c[i][j]=c[i][j]+a[i][k]*b[k][j];
                        }
              }
       }
