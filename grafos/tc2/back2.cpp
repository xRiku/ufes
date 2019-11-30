#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#define mp make_pair
#define pb push_back
#define MAX 150
#define MAXV 21000
#define INF 9999999
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, int> ii_64;
typedef pair<int, int> ii64;
const double EPS = 1e-10;

struct caminho {
    int a, b;
    int c;
};

struct aresta {
    int u, v, next;
    int cost, flow;
    aresta(int u = 0, int v = 0, int next = 0, int cost = 0, int flow = 0)
        : u(u)
        , v(v)
        , next(next)
        , cost(cost)
        , flow(flow)
    {
    }
};

int V, E, A, previous[MAXV];
int f, sp, dist[MAX], p[MAX];
int visitado[MAX];
vector<aresta> grafo(MAXV);
vector<caminho> arestas(MAXV);


void adiciona_aresta(int u, int v, int c, int f){
    grafo[A] = aresta(u, v, previous[u], c, f);
    previous[u] = A++;
    grafo[A] = aresta(v, u, previous[v], -c, 0);
    previous[v] = A++;
}


void aumentar(int v, int aresta_minima){
    for (int i = p[v]; i != -1; i = p[grafo[i].u]){
        aresta_minima = min(aresta_minima, grafo[i].flow);
    }
    for (int i = p[v]; i != -1; i = p[grafo[i].u]) {
        grafo[i].flow = grafo[i].flow - aresta_minima;
        grafo[i ^ 1].flow = grafo[i].flow + aresta_minima;
    }
    f = aresta_minima;
}


bool dijkstra(int s, int t){
    for (int i = 0; i <= V + 1; i++) {
        dist[i] = INF;
        p[i] = -1;
        visitado[i] = 0;
    }
    queue<int> q;
    dist[s] = 0;
    visitado[s] = 1;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = previous[u]; i != -1; i = grafo[i].next) {
            int v = grafo[i].v;
            if (grafo[i].flow && dist[u] + grafo[i].cost < dist[v]) {
                dist[v] = dist[u] + grafo[i].cost;
                p[v] = i;
                if (!visitado[v]) {
                    visitado[v] = 1;
                    q.push(v);
                }
            }
        }
        visitado[u] = 0;
    }
    sp = dist[t];
    return sp != INF;
}


int main(){
    int t = 1;
    int d, k;
    while (scanf("%d %d", &V, &E) != EOF) {
        printf("Instancia %d\n", t++);
        A = 0;
        for (int i = 0; i <= V + 1; i++){
            previous[i] = -1;
        }
        for (int i = 0; i < E; ++i){
            scanf("%d %d %d", &arestas[i].a, &arestas[i].b, &arestas[i].c);
        }
        scanf("%d %d", &d, &k);
        adiciona_aresta(0, 1, 0, d);
        adiciona_aresta(V, V + 1, 0, d);
        for (int i = 0; i < E; ++i) {
            adiciona_aresta(arestas[i].a, arestas[i].b, arestas[i].c, k);
            adiciona_aresta(arestas[i].b, arestas[i].a, arestas[i].c, k);
        }
        int maxFlow = 0, resp = 0;
        while (dijkstra(0, V + 1)) {
            f = 0;
            aumentar(V + 1, INF);
            maxFlow += f;
            resp += sp * f;
            if (maxFlow == d){
                break;
            }
        }
        if (maxFlow != d){
            printf("impossivel\n\n");
        }
        else{
            printf("%d\n\n", resp);
        }
    }
}