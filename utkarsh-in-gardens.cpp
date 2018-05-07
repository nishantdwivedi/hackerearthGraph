#include <bits/stdc++.h>
using namespace std;
const int V = 2001;
bool graph[][V];

void DFS(bool graph[][V], bool marked[], int n,
               int vert, int start, int &count)
{

    marked[vert] = true;


    if (n == 0) {


        marked[vert] = false;


        if (graph[vert][start])
        {
            count++;
            return;
        } else
            return;
    }


    for (int i = 0; i < V; i++)
        if (!marked[i] && graph[vert][i])


            DFS(graph, marked, n-1, i, start, count);

  .
    marked[vert] = false;
}


int countCycles(bool graph[][V], int cycle)
{

    bool marked[V];
    memset(marked, 0, sizeof(marked));


    int count = 0;
    for (int i = 0; i < V - (cycle - 1); i++) {
        DFS(graph, marked, cycle-1, i, i, count);


        marked[i] = true;
    }

    return count/2;
}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        cin>>graph[i][j];
    }

   }

    int cycle = 4;

         cout<< countCycles(graph, cycle)<<endl;
    return 0;
}
