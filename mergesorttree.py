class SegmentTree:
    def __init__(self, arr):
        self.n = len(arr)
        self.tree = [0] * (2 * self.n)
        self.construct_tree(arr)

    def construct_tree(self, arr):
        for i in range(self.n):
            self.tree[self.n + i] = arr[i]

        for i in range(self.n - 1, 0, -1):
            self.tree[i] = self.tree[2 * i] + self.tree[2 * i + 1]

    def update(self, index, value):
        index += self.n
        self.tree[index] = value

        while index > 1:
            index //= 2
            self.tree[index] = self.tree[2 * index] + self.tree[2 * index + 1]

    def query(self, left, right):
        left += self.n
        right += self.n
        result = 0

        while left < right:
            if left % 2 == 1:
                result += self.tree[left]
                left += 1

            left //= 2

            if right % 2 == 1:
                right -= 1
                result += self.tree[right]

            right //= 2

        return result

# Example Usage:
arr = [1, 3, 5, 7, 9, 11]
segment_tree = SegmentTree(arr)

print("Sum in range [1, 4]:", segment_tree.query(1, 4))
segment_tree.update(2, 6)
print("Sum in range [1, 4] after update:", segment_tree.query(1, 4))
