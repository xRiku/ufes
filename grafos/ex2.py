class grafo(object):
    def __init__(self):
        self.vertices = list()

    def complete(self, n):
        for i in range(n):
            self.vertices.append(vertex(i))

    def print_v(self):
        if (bool(self.vertices)):
            for i in self.vertices:
                print(i.name, ':', i.marcado)
                i.print_vizinhos()
        else:
            print(self.vertices)

    def isfechado(self):
        for i in self.vertices:
            if i.marcado == True:
                continue
            else:
                return False
        return True


class vertex(object):
    def __init__(self, name):
        self.marcado = False
        self.name = name
        self.vizinhos = set()
    
    def print_vizinhos(self):
            print(self.vizinhos)


def checkin(vertex, grafo):
    for i in grafo.vertices:
        if vertex == i.name:
            return True

    return False 

def check(v1, v2, peso, grafo):
    if not checkin(v1,grafo):
        grafo.vertices.append(vertex(v1))

    if not checkin(v2,grafo):
        grafo.vertices.append(vertex(v2))

    for i in grafo.vertices:
        if v1 == i.name:
            i.vizinhos.add((v2, peso))

        if v2 == i.name:
            i.vizinhos.add((v1, peso))

    


if __name__ == '__main__':
    x = (0,0,0,0)
    y = 0
    N, M, C, K = [int(i) for i in input().split()]
    while  y != x:
        Grafo = grafo()
        print(N, M, C, K)
        for i in range(M):
            U, V, P = [int(i) for i in input().split()]
            check(U, V, P, Grafo)
        Grafo.print_v()
        N, M, C, K = [int(i) for i in input().split()]
        y = N, M, C, K



