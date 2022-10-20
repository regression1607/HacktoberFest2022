class Solution {

    public static int minChar(String str) {
       int c=0;

       int low=0;

       int high = str.length()-1;

       while(low<high){

           if(str.charAt(low)==str.charAt(high)){

               low++;

               high--;

           }

           else{

               c++;

               low=0;

               high=str.length()-1-c;

           }

       }

       return c;

    }

}
