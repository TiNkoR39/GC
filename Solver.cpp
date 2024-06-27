#include "Solver.h"


bool cmp(std::vector<int> edges1, std::vector<int> edges2){
    return(edges1.size() > edges2.size());
}


Solver::Solver(int N, int M, std::vector<std::vector<int>> edges){
    this -> N = N;
    this -> M = M;
    this -> edges = edges;
}


std::vector<int> Solver::colorize(){

    int cnt_col = 0, i, j, k, v, u;
    bool flag;
    std::vector<int> colors(N);
    for(i = 0; i < N; i++) colors[i] = -1;

    sort(edges.begin(), edges.end(), cmp);
    
    for(i = 0; i < N-1; i++){
        v = edges[i][0];
        if(colors[v] == -1){
            colors[v] = cnt_col;
            for(j = i+1; j<N; j++){
                u = edges[j][0];
                flag = false;
                for(k = 1; k < edges[j].size(); k++){
                    if(colors[edges[j][k]] == cnt_col) flag = 1;
                }
                if(!flag && colors[u] == -1) colors[u] = cnt_col;

            }

            cnt_col++;

        }
    }

    return colors;
}