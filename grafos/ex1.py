class grafo(object):
    def __init__(self):
        self.vertices = list()

    def print_v(self):
        if (bool(self.vertices)):
            for i in self.vertices:
                print(i.name, ':', i.marcado)
                i.print_vizinhos()
        else:
            print(self.vertices)
            
    def complete(self, n):
        start = 97
        for i in range(n):
            self.vertices.append(vertex(chr(97+i)))


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

def check(v1, v2, grafo):
    if not checkin(v1,grafo):
        grafo.vertices.append(vertex(v1))

    if not checkin(v2,grafo):
        grafo.vertices.append(vertex(v2))

    for i in grafo.vertices:
        if v1 == i.name:
            i.vizinhos.add(v2)

        if v2 == i.name:
            i.vizinhos.add(v1)

def nconexas(grafo):
    componente = 0
    x = []
    for i in grafo.vertices:
        if i.marcado == False:
            componente += 1
            x = [i.name]
            prof(i, grafo, x)
    return componente 

    
def prof(v, grafo, x):
    v.marcado = True
    for z in v.vizinhos:
        for i in grafo.vertices:
            if z == i.name:
                if i.marcado == False:
                    x.append(i.name)
                    prof(i,grafo, x)               
    if v.name == x[0]:
        x.sort()
        for i in x:
            print(i, end=',')
        print()

if __name__ == '__main__':
    testes = int(input())
    for i in range(testes):
        print('Case #{}:'.format(i+1))
        Grafo = grafo()
        (vertices, arestas) = [int(x) for x in input().split()]
        Grafo.complete(vertices)
        for j in range(arestas):
            (v1, v2) = input().split()
            check(v1,v2,Grafo)
        print('{} connected components\n'.format(nconexas(Grafo)))


        
