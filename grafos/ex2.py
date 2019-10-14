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

def customin(Grafo, origem, destino):
    custosf = list()
    for i in Grafo.vertices:
        if i.name == origem:
            y = i
            y.marcado = True
            Grafo.vertices.pop(Grafo.vertices.index(i))
            Grafo.vertices.insert(0,y)
    print()
    Grafo.print_v()
    for i in Grafo.vertices[0].vizinhos:
        if i[0] == destino - 1:
            custo = i[1]
    custosf.append(custo)
    count = 0
    # while not Grafo.isfechado():
    #     for i in Grafo.vertices[count].vizinhos:
    #         for j in Grafo.vertices:
    #             if i[0] == j.name:
    #                 if j.marcado == False: #condicao para ocorrer
    #     z = min(Grafo.vertices[count].vizinhos, key = lambda t:t[1])
    #     for i in Grafo.vertices:
    #         if i.name == z[0] and not i.marcado:
    #             custo = 
    #     count += 1

    # custo = min(custosf)
    # return custo

def intrajeto(Grafo, vertice, destino):
    if vertice < destino - 1:
        return True
    else:
        return False
        
def fix(Grafo, destino):
    for i in Grafo.vertices:
        i.vizinhos = [i.vizinhos.remove(x) for x,y in i.vizinhos if y < destino - 1]




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
        fix(Grafo, C)
        Grafo.print_v()
        customin(Grafo, K, C)
        N, M, C, K = [int(i) for i in input().split()]
        y = N, M, C, K



