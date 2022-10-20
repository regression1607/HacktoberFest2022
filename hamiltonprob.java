//username DishaKhanapurkar
class Solution 
{ 
     public static int[][] printAdjacency(int n, int m, int[][] edges) {

        // n - > number of nodes
        // m - > number of edges
        // adjacence list of type - for node 0 - the list is 1 ,4 5, 6 and not 0 , 1 , 4 ,5,6
        int[][] adjlist = new int[n][];
        ArrayList<Integer>[] arraylist = new ArrayList[n];

        for (int i = 0; i < n; i++) {
            arraylist[i] = new ArrayList<Integer>();
        }
        for (int i = 0; i < m; i++) {
            arraylist[edges[i][0]].add(edges[i][1]);
            arraylist[edges[i][1]].add(edges[i][0]);
        }

        for (int i = 0; i < n; i++) {
            int temp[] = new int[arraylist[i].size()];
            //temp[0] = i;

            arraylist[i].sort(Comparator.naturalOrder());
            for (int j = 0; j < arraylist[i].size(); j++) {
                temp[j] = arraylist[i].get(j);
            }

            adjlist[i] = temp;
        }

        return adjlist;
    }
     boolean meth(int N, int cur, int[][] adjlist, boolean[] visited, int count) {
        visited[cur] = true;
        count++;
    
        if (N == count) {
            return true;
        }
        for (int i = 0; i < adjlist[cur].length; i++) {
            if (!visited[adjlist[cur][i]]) {

             
                if (meth(N, adjlist[cur][i], adjlist, visited, count)) {
                   
                    return true;
                }
            }
        }
        visited[cur] = false;
        

        return false;

    }


    boolean check(int N, int M, ArrayList<ArrayList<Integer>> Edges) 
    { 
       
        // code here
        int count = 0;
        boolean[] visited = new boolean[N + 1];

        int[][] edges = new int[Edges.size()][];
        for (int i = 0; i < Edges.size(); i++) {
            int[] temp = new int[Edges.get(i).size()];
            for (int j = 0; j < Edges.get(i).size(); j++) {
                temp[j] = Edges.get(i).get(j);
            }
            edges[i] = temp;
        }
        int[][] adjlist = printAdjacency(N + 1, M, edges);

        for (int i = 1; i <= N; i++) {
            if (meth(N , i, adjlist, visited, count)) return true;

        }


        return false;
    }
}
