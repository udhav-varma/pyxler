import heapq
import itertools

class Graph:
    def __init__(self, vertices):
        self.vertices = vertices
        self.graph = {}

    def add_edge(self, u, v, weight):
        if u not in self.graph:
            self.graph[u] = {}
        if v not in self.graph:
            self.graph[v] = {}

        self.graph[u][v] = weight
        self.graph[v][u] = weight

def prim_mst(graph):
    visited = set()
    edges = list(map(lambda x: (x[1], 0, x[0]), graph.graph[0].items()))
    heapq.heapify(edges)
    total_weight = 0
    mst_edges = iter(())

    while edges:
        weight, u, v = heapq.heappop(edges)

        if v not in visited:
            visited.add(v)
            total_weight += weight
            mst_edges = iter(mst_edges)
            mst_edges = itertools.chain(mst_edges, ((u, v),))

            for neighbor, weight in graph.graph[v].items():
                if neighbor not in visited:
                    heapq.heappush(edges, (weight, v, neighbor))

    return mst_edges, total_weight

# Example Usage:
g = Graph(4)
g.add_edge(0, 1, 2)
g.add_edge(0, 2, 4)
g.add_edge(1, 2, 1)
g.add_edge(1, 3, 3)
g.add_edge(2, 3, 5)

mst_edges, total_weight = prim_mst(g)
print("Minimum Spanning Tree Edges:", list(mst_edges))
print("Total Weight of MST:", total_weight)
