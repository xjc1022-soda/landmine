#include <iostream>
# include "map.h"
using namespace std;

// use this function to generate a random map from 5 designed maps
void mapContainer(int map[][10], int x){
  if (x==1){
     int array[10][10]={{0  ,1  ,100,2  ,1  ,1  ,1  ,100,1  ,0  },
                        {1  ,2  ,2  ,2  ,100,2  ,2  ,2  ,999,0  },
                        {1  ,100,2  ,2  ,2  ,2  ,100,1  ,0  ,0  },
                        {0  ,1  ,2  ,100,1  ,1  ,2  ,2  ,999,0  },
                        {0  ,0  ,1  ,1  ,2  ,999,2  ,100,1  ,0  },
                        {1  ,1  ,1  ,0  ,1  ,100,2  ,2  ,1  ,1  },
                        {1  ,100,2  ,999,1  ,2  ,2  ,2  ,100,1  },
                        {1  ,2  ,100,2  ,1  ,2  ,100,3  ,2  ,2  },
                        {0  ,1  ,1  ,2  ,100,2  ,2  ,3  ,100,1  },
                        {0  ,0  ,0  ,999,1  ,1  ,1  ,100,2  ,1  }};
    // use for loop to copy map from existing source (2D array) 
    for (int i=0; i<10; i++){
         for (int j=0; j<10;j++){
             map[i][j]=array[i][j];
         }
       }
    }
  
  else if (x==2){
     int array[10][10]={{1  ,100,2  ,1  ,0  ,0  ,1  ,100,100,1  },
                        {1  ,2  ,100,2  ,1  ,0  ,1  ,2  ,2  ,1  },
                        {0  ,1  ,2  ,100,1  ,999,1  ,1  ,0  ,0  },
                        {1  ,1  ,2  ,1  ,999,1  ,100,1  ,0  ,0  },
                        {1  ,100,2  ,999,0  ,999,1  ,2  ,1  ,1  },
                        {1  ,2  ,100,999,1  ,999,999,1  ,100,1  },
                        {1  ,2  ,2  ,2  ,100,1  ,1  ,2  ,2  ,1  },
                        {1  ,100,1  ,1  ,999,2,  2  ,100,1  ,0  },
                        {1  ,2  ,1  ,2  ,1  ,100,3  ,2  ,1  ,0  },
                        {0  ,0  ,1  ,100,2  ,2,  100,1  ,0  ,0  }};
      for (int i=0; i<10; i++){
         for (int j=0; j<10;j++){
            map[i][j]=array[i][j];
         }
      }
   }

  else if (x==3){
       int array[10][10]={{0  ,1  ,1  ,999,1  ,0  ,1  ,1  ,1  ,0  },
                          {0  ,1  ,2  ,100,2  ,2  ,2  ,100,2  ,1  },
                          {1  ,2  ,100,3  ,100,3  ,100,3  ,100,1  },
                          {1  ,100,3  ,3  ,2  ,100,2  ,3  ,2  ,2  },
                          {1  ,2  ,100,2  ,2  ,1  ,2  ,2  ,100,1  },
                          {0  ,1  ,2  ,100,2  ,2  ,2  ,100,2  ,1  },
                          {0  ,0  ,1  ,2  ,100,3  ,100,2  ,1  ,0  },
                          {0  ,0  ,999,1  ,2  ,100,2  ,1  ,0  ,0  },
                          {0  ,0  ,999,0  ,1  ,999,1  ,999,999,0  },
                          {0  ,0  ,0  ,999,0  ,0  ,0  ,0  ,999,0  }};
       for (int i=0; i<10; i++){
           for (int j=0; j<10;j++){
               map[i][j]=array[i][j];
          }
       }
    }
  
  else if (x==4){
    int  array[10][10]={{1,100,2,2,100,1,1,1,1,0},
                        {2,2,3,100,3,3,2,100,1,0},
                        {1,100,2,2,100,2,100,2,999,0},
                        {1,1,1,1,1,3,2,2,0,0},
                        {0,1,1,1,999,1,100,1,0,0},
                        {1,2,100,1,0,1,2,2,999,0},
                        {1,100,2,1,999,1,100,1,0,0},
                        {1,1,1,0,0,1,2,2,1,0},
                        {0,0,999,1,1,999,2,100,2,0},
                        {0,0,0,1,100,1,2,100,2,0}};
     for (int i=0; i<10; i++){
         for (int j=0; j<10;j++){
             map[i][j]=array[i][j];
         }
     }
   }
  else if (x==5){
      int array[10][10]={{0,0,0,0,1,100,1,0,0,0},
                         {1,1,2,1,2,2,2,1,100,0},
                         {1,100,3,100,1,1,100,1,0,0},
                         {1,2,100,2,999,100,3,100,1,0},
                         {0,2,2,2,999,1,2,1,1,0},
                         {0,1,100,1,1,1,2,1,1,0},
                         {1,1,2,1,1,100,2,100,1,0},
                         {1,100,2,1,1,0,999,1,1,0},
                         {1,2,3,100,1,0,999,1,1,0},
                         {0,1,100,2,1,0,1,100,1,0}};
      for (int i=0; i<10; i++){
         for (int j=0; j<10;j++){
            map[i][j]=array[i][j];
         }
      }
   }
}
