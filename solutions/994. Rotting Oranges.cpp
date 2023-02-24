                    countF++;
                }
            }
        }
        int tmax=0;
         int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        int count=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tmax=max(tmax,t);
            q.pop();
            for(int i=0;i<4;i++){
             
                    int nrow=r+row[i];
                    int ncol=c+col[i];
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 && vis[nrow][ncol]!=2){
                        q.push({{nrow,ncol},t+1});
                        vis[nrow][ncol]=2;
                        count++;
                    }
                    
                    
                
            }
           }
  if(count!=countF){
      return -1;
  
    }
                           return tmax;
    }
};
