//username DishaKhanapurkar
class Solution
{
    public int findOccurrence(char mat[][], String target)
    {
        
        int n=mat.length;
           int m=mat[0].length;
           
           int count=0;
           for(int i=0;i<n;i++)
               {
                   for(int j=0;j<m;j++){
                 if(mat[i][j]==target.charAt(0)){
                  count+=dfs(mat,target,i,j,0);
                       }
                   }
               }
        
        return count;
        
    }
    
   public int dfs(char[][]mat,String target,int i,int j,int ind) 
     {
         
   if(i>=mat.length||j>=mat[0].length||i<0||j<0||mat[i][j]=='*'||target.charAt(ind)!=mat[i][j])
                   return 0;
                   
                   
           if(ind==target.length()-1)
            return 1;
         
         
         
         
         
         char temp=mat[i][j];
         mat[i][j]='*';
         
        int u=dfs(mat,target,i+1,j,ind+1);
        int d=dfs(mat,target,i-1,j,ind+1);
        int r=dfs(mat,target,i,j+1,ind+1);
         int l=dfs(mat,target,i,j-1,ind+1);
         mat[i][j]=temp;
         
         
         return u+d+r+l;
         
         
         
         
         
    }}
