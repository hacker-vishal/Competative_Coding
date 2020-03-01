#include<bits/stdc++.h>
using namespace std;
int getMinVertex(int* dist,bool* visited,int n){
  int minVertex =-1;
  for(int i=0;i<n;i++){
    if(!visited[i]&& minVertex == -1 || dist[i]<dist[minVertex])
    minVertex = i;
  }
  return minVertex;
}
void dijkstra(int** edges,int n){
  bool* visited = new bool[n]();
  int* dist = new int[n];
  for(int i=0;i<n;i++){
    dist[i] = INT_MAX;
  }
  dist[0] = 0;
  for(int i=0;i<n-1;i++){
    // get unvisited vertex with  minimum distance
    int minVertex = getMinVertex(dist,visited,n);
    visited[minVertex] = true;
    // explore all the neighbours of minVertex which are unvisited and update the distance array if required
    for(int j=0;j<n;j++){
      if(edges[minVertex][j] && !visited[j]){
        int currD = dist[minVertex]+edges[minVertex][j];
        if(dist[j]>currD){
            dist[j] = currD;
          }
      }
    }
  }
  for(int i=0;i<n;i++){
    cout << i <<" "<<  dist[i]<< endl;
  }
  delete []visited;
  delete []dist;
}
int main()
{
  int n;
  int e;
  cin >> n >> e;
  int** edges = new int*[n];
  for(int i=0;i<n;i++){
    edges[i] = new int[n];
    for(int j=0;j<n;j++){
      edges[i][j]=0;
    }
  }
  for(int i = 0; i<e; i++){
    int f, s, weight;
    cin >> f >> s >> weight;
    edges[f][s] = weight;
    edges[s][f] = weight;
  }
  cout << endl;
  dijkstra(edges,n);
  for(int i =0;i<n;i++){
    delete [] edges[i];
  }
  delete [] edges;
}
/*
4 4
0 1 3
0 3 5
1 2 1
2 3 8
*/
