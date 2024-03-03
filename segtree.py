class SegmentTree:
    def __init__(self, arr):
        self.size = len(arr)
        self.tree = [None] * (2 * self.size)

        # Build the segment tree
        self._build_tree(arr, 1, 0, self.size - 1)

    def _build_tree(self, arr, node, start, end):
        if start == end:
            self.tree[node] = arr[start]
        else:
            mid = (start + end) // 2
            left_child = 2 * node
            right_child = 2 * node + 1

            self._build_tree(arr, left_child, start, mid)
            self._build_tree(arr, right_child, mid + 1, end)

            self.tree[node] = self.tree[left_child] + self.tree[right_child]

    def query(self, query_start, query_end):
        return self._query(1, 0, self.size - 1, query_start, query_end)

    def _query(self, node, start, end, query_start, query_end):
        if query_start > end or query_end < start:
            return 0

        if query_start <= start and query_end >= end:
            return self.tree[node]

        mid = (start + end) // 2
        left_child = 2 * node
        right_child = 2 * node + 1

        left_sum = self._query(left_child, start, mid, query_start, query_end)
        right_sum = self._query(right_child, mid + 1, end, query_start, query_end)

        return left_sum + right_sum

    def update(self, index, new_value):
        self._update(1, 0, self.size - 1, index, new_value)

    def _update(self, node, start, end, index, new_value):
        if start == end:
            self.tree[node] = new_value
        else:
            mid = (start + end) // 2
            left_child = 2 * node
            right_child = 2 * node + 1

            if index <= mid:
                self._update(left_child, start, mid, index, new_value)
            else:
                self._update(right_child, mid + 1, end, index, new_value)

            self.tree[node] = self.tree[left_child] + self.tree[right_child]

# Example Usage:
arr = [1, 3, 5, 7, 9, 11]
seg_tree = SegmentTree(arr)

result = seg_tree.query(1, 4)
print("Sum in range [1, 4]:", result)

seg_tree.update(2, 8)
result_after_update = seg_tree.query(1, 4)
print("Sum after update in range [1, 4]:", result_after_update)
