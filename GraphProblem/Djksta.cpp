#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printDistance(int arr[]){
	printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < 9; i++) 
        printf("%d \t\t %d\n", i, arr[i]); 
}
int minDistance(int distance[],int selected[]){
	int min=INT_MAX,index=0;
	for(int i=0;i<9;i++){
		if(selected[i]==0 && distance[i]<=min){
			min=distance[i];
			index=i;
		}
	}
	return index;
}
void dijkstra(int graph[9][9],int source){
	int result[9];
	for(int i=0;i<9;i++){
		result[i]=INT_MAX;
	}
	int selected[9]={0};
	result[source]=0;
	for(int i=0;i<8;i++){
		int u=minDistance(result,selected);
		selected[u]=1;
		for(int v=0;v<9;v++){
			//We first check if that vertex is selected or not by selected[v]==0
			//then we check at that edge value graph is connected or not by checking graph[u][v]
			//INT_MAX + some number is = negative number ,So we are avoiding this 
			if(selected[v]==0 && graph[u][v] && result[u]!=INT_MAX && result[u]+graph[u][v] < result[v])
				result[v]=result[u]+graph[u][v];
		}
	}
	printDistance(result);
}

int main() 
{ 
    int graph[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    dijkstra(graph, 0); 
    return 0;
}
