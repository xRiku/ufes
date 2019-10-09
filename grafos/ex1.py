class grafo(object):
    def __init__(self):
        self.vertices = set()

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
            self.vertices.add(vertex(chr(97+i)))
        
        sorted(self,self.vertices.name)



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
        grafo.vertices.add(vertex(v1))
        for i in grafo.vertices:
            if v1 == i.name:
                i.vizinhos.add(v2)
    
    if not checkin(v2,grafo):
        grafo.vertices.add(vertex(v2))
        for i in grafo.vertices:
            if v2 == i.name:
                i.vizinhos.add(v1)
    
#     grafo.vertices.vizinhos

# def nconexas():
#     for i in grafos:

# if __name__ == '__main__':
#     # testes = int(input())
#     # print(testes)
#     testes = 1
#     for i in range(testes):
#         grafo = grafo()
#         print(grafo.vertices)
#         # (vertices, arestas) = [int(x) for x in input().split()]
#         vertices, arestas = 3, 1
#         print('vertices: {} arestas: {}'.format(vertices, arestas))
#         for j in range(arestas):
#             (v1, v2) = input().split()
#             check(v1,v2,grafo)

#         grafo.print_v()


        



    