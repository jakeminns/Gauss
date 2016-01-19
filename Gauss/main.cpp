//
//  main.cpp
//  Gauss
//
//  Created by Jake Minns on 04/07/2015.
//  Copyright (c) 2015 Jake Minns. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    
    int i,j;
    
    size_t column = 3;
    size_t row = 3;
    
    
    float matrix_a[3][3] = {{6,3,8},{5/4,9/4,9},{1.4,9/4,8}};   //[row][columns]
        float matrix_b[3][1] = {6,6,9/4};
    float divisor;
    
    //for (i=0; i<column; i++){
      
        //for(j=0; j<row; j++){
           // cin >> matrix_a[i][j];
       // }
   // }

  //another loop
    int c = 0;
    
    for(int r = 0; r<column ;r++){
        
        matrix_a[r][0] = matrix_a[r][0]/matrix_a[0][0];
        
    }
    
    
    
    
    for (int c = 0; c< column-1; c++){
    
        for (int a = 1; a+c < row; a++){
        
            if (matrix_a[a][c] != 0){
                
                    divisor = matrix_a[a-1][c] / matrix_a [a][c];
            
                        for(int b = 0+c; b < column; b++){
                
                            matrix_a[a-1][b] = matrix_a[a-1][b] - (divisor)*matrix_a[a][b];
                            matrix_b[a-1][0] = matrix_b[a-1][0] - (divisor)*matrix_b[a][0];
                }
            }
        }
    }
  
    for (i=0; i<8o;column; i++){
        
        for(j=0; j<row; j++){
            
           cout << matrix_a[i][j]<< "     ";
        }
       
    cout << "     =     " << matrix_b[i][0]<<endl;
    }

}
    
