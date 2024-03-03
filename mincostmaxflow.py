from collections import defaultdict
import heapq

class MinCostMaxFlow:
    def __init__(self, vertices):
        self.vertices = vertices
        self.graph = defaultdict(dict)

    def add_edge(self, u, v, capacity, cost):
        self.graph[u][v] = {'capacity': capacity, 'flow': 0, 'cost': cost}
        self.graph[v][u] = {'capacity': 0, 'flow': 0, 'cost': -cost}

    def bellman_ford(self, source, sink):
        distance = [float('inf')] * self.vertices
        distance[source] = 0

        for _ in range(self.vertices - 1):
            for u in range(self.vertices):
                for v, edge in self.graph[u].items():
                    if edge['capacity'] - edge['flow'] > 0:
                        distance[v] = min(distance[v], distance[u] + edge['cost'])

        return distance[sink] < float('inf')

    def dijkstra(self, source, sink, parent):
        distance = [float('inf')] * self.vertices
        distance[source] = 0
        heap = [(0, source)]

        while heap:
            dist_u, u = heapq.heappop(heap)

            if dist_u > distance[u]:
                continue

            for v, edge in self.graph[u].items():
                if edge['capacity'] - edge['flow'] > 0:
                    new_dist = distance[u] + edge['cost']

                    if new_dist < distance[v]:
                        distance[v] = new_dist
                        parent[v] = (u, edge)
                        heapq.heappush(heap, (new_dist, v))

        return distance[sink] < float('inf')

    def min_cost_max_flow(self, source, sink):
        max_flow = 0
        min_cost = 0

        while self.bellman_ford(source, sink):
            parent = [None] * self.vertices

            while self.dijkstra(source, sink, parent):
                path_flow = float('inf')
                s = sink

                while s != source:
                    u, edge = parent[s]
                    path_flow = min(path_flow, edge['capacity'] - edge['flow'])
                    s = u

                max_flow += path_flow
                min_cost += path_flow * parent[sink][1]['cost']

                v = sink
                while v != source:
                    u, edge = parent[v]
                    edge['flow'] += path_flow
                    self.graph[v][u]['flow'] -= path_flow
                    v = u

        return max_flow, min_cost

# Example Usage:
g = MinCostMaxFlow(4)
g.add_edge(0, 1, 2, 1)
g.add_edge(0, 2, 1, 2)
g.add_edge(1, 2, 1, 1)
g.add_edge(1, 3, 1, 3)
g.add_edge(2, 3, 2, 2)

max_flow, min_cost = g.min_cost_max_flow(0, 3)
print("Maximum Flow:", max_flow)
print("Minimum Cost:", min_cost)
