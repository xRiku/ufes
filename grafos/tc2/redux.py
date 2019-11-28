import networkx as nw
import networkx.algorithms


if __name__ == "__main__":
    G = nw.Graph()

    (N, M) = [int(x) for x in input().split()]
    i = 0
    while i < M:
            lista = input().split()
            if len(lista) != 0:
                (u, v, c) = [int(x) for x in lista]
                G.add_edge(u,v, weight = c)
                i+=1
    T = nw.algorithms.tree.mst.minimum_spanning_tree(G)
    T1 = sorted(T.edges(data=True))
    peso = 0
    for o in T1:
        peso += o[2].get('weight')
    print(peso)


