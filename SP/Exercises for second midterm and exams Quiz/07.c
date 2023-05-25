#include<stdio.h>
int main(){
    
    int matrix[100][100];
    
    int m,n;
    scanf("%d%d",&m,&n);

    for( int i=0; i<m; i++){
        
       for ( int j=0; j<n; j++){
           scanf("%d",&matrix[i][j]);
       }
        
    }
    int x,y;
    scanf("%d%d",&x,&y);
    if(matrix[x][y]==0){
        int x2=x;
        int y2=y+1;
   
        for(;y2<n;y2++){
          if(matrix[x2][y2]==0){
              matrix[x2][y2]=1;
          }  break; 
        }
        
         x2=x;
         y2=y-1;
        
        for(;y2>=0;y2--){
        if(matrix[x2][y2]==0){
            matrix[x2][y2]=1;
        }else break;
     }
     x2=x+1;
         y2=y;
   
        for(;x2<m;x2++){
          if(matrix[x2][y2]==0){
              matrix[x2][y2]=1;
          } else break; 
        }
        
        x2=x-1;
         y2=y;
   
        for(;x2>=0;x2--){
          if(matrix[x2][y2]==0){
              matrix[x2][y2]=1;
          } else break; 
        }
     
     
     
   }
    
    matrix[x][y]=1;
    for( int i=0; i<m; i++){
        
       for ( int j=0; j<n; j++){
           printf("%d ", matrix[i][j]);
       }
        printf("\n");
    }
    
    return 0;
}

// Read from standard input the dimensions of a matrix (m < 100 and n < 100) which contains only zeros and ones. Then read the elements of the matrix.
// Read the coordinates of one element of the matrix. If the element of the read position is 0, then it should become 1 and:
// all zeros above that element to the first element with value 1 or to the start of the column,
// all zeros bellow that element to the first element with value 1 or to the end of the column,
// all zeros left from that element to the first element with value 1 or to the begin of the row and
// all zeros right from that element to the first element with value 1 or to the end of the row.
// If the element of the given position is 1 than the matrix stays unchanged.
// Print the changed matrix.
